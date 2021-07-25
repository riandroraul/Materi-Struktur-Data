#include <cstdlib>

#include <iostream>

#include <conio.h>

using namespace std;

struct SIMPUL{

char NAMA[10];

char NIM[10];

char GENDER;

int NILAI;

struct SIMPUL *LINK;

};

SIMPUL *P,*Q,*FIRST,*LAST;

void BUAT_SIMPUL(void);

void INIT(void);

void INSERT(void);

void DELETE(void);

void AWAL(void);

void INSERT_KANAN();

void DELETE_KANAN();

void CETAKLAYAR(void);

void FREE_MEMORY(void);

int PIL;

char PILIHAN[1],HURUF;

int main(int argc, char *argv[])

{

INIT();

do{

system("cls");

cout<<"QUEUE SINGLY LINKED LIST"<<endl;

cout<<"======================="<<endl;

cout<<"1. INSERT DATA"<<endl;

cout<<"2. HAPUS DATA"<<endl;

cout<<"3. CETAK DATA"<<endl;

cout<<"4. EXIT"<<endl<<endl;

cout<<"PILIHAN (1 - 4): "; cin>>PILIHAN;

PIL=atoi(PILIHAN);

switch (PIL)

{

case 1:

INSERT();

break;

case 2:

DELETE();

break;

case 3:

CETAKLAYAR();

break;

default:

cout<<"TERIMA KASIH"<<endl;

FREE_MEMORY();

break;

}

}while (PIL<4);

system("PAUSE");

return EXIT_SUCCESS;

}

void BUAT_SIMPUL(void){ //Buat simpul baru
P=(SIMPUL *)malloc(sizeof(SIMPUL));
	if(P!=NULL){
		cout<<"Nama : ";cin>>P->NAMA;

		cout<<"NIM : ";cin>>P->NIM;

		cout<<"GENDER : ";cin>>P->GENDER;

		cout<<"NILAI : ";cin>>P->NILAI;

		}

		else{

		cout<<"Pembuatan Simpul Gagal"<<endl;

		getch();

		exit(1);

	}

}

void INIT(void)//Inisialisasi

{

FIRST=NULL;

LAST=NULL;

}

void AWAL(void)//Pembuatan simpul pertama

{

FIRST=P;

LAST=P;

P->LINK=NULL;

}

void INSERT_KANAN(void)

{

LAST->LINK=P;

LAST=P;

P->LINK=NULL;

}

void DELETE_KANAN(void)

{

if(FIRST==LAST)//Baru ada satu simpul

{

free(LAST);//Atau free(FIRST)

INIT();

}

else

{

Q = FIRST;

while(Q ->LINK != LAST)

Q = Q -> LINK;

free(LAST);

LAST = Q;

LAST -> LINK = NULL;

}

}

void INSERT(void)//Insert satu simpul diujung kanan

{

BUAT_SIMPUL();

if(FIRST==NULL)

AWAL();

else

INSERT_KANAN();

}

void DELETE(void)//Delete satu simpul terakhir

{

if(LAST==NULL)

{

cout<<"Data belum ada"<<endl;

getch();

}

else

{

DELETE_KANAN();

cout<<"Data terakhir dihapus"<<endl;

getch();

}

}

void CETAKLAYAR()//Cetak seluruh data linked list

{

int i=1;

if(FIRST!=NULL)

{

Q=FIRST;

while(Q!=NULL)

{

cout<<"Data ke : "<<i++<<endl;

cout<<"Nama : "<<Q->NAMA<<endl;

cout<<"NIM : "<<Q->NIM<<endl;

cout<<"GENDER : "<<Q->GENDER<<endl;

cout<<"NILAI : "<<Q->NILAI<<endl;

Q=Q->LINK;

cout<<endl;

}

}

else

cout<<"Data Kosong"<<endl;

getch();

}

	void FREE_MEMORY(void){

		while(FIRST!=NULL){
			Q=FIRST->LINK;
			free(FIRST);
			FIRST=Q;
		}

	}