#include <iostream>
#include <conio.h>
#include <stdlib.h>
#define n 10
using namespace std;

void insert();
void hapus();
void print();
void Inisialisasi();
void reset();
int pil,front,rear;
char pilihan [1],huruf;
char doubleEndedQueue[n];
int main ( )
{
     Inisialisasi();
     do
     {
           cout<<" ANIMASI QUEUE"<<endl;
           cout<<"=============="<<endl;
           cout<<"1. INSERT"<<endl;
           cout<<"2. DELETE"<<endl;
           cout<<"3. CETAK QUEUE"<<endl;
           cout<<"4. QUIT"<<endl;
           cout<<"PILIHAN : "; cin>>pilihan;
           pil=atoi(pilihan);
           switch (pil)
           {
           case 1:
                insert ();
                break;
           case 2:
                hapus();
                break;
           case 3:
                print ();
                break;
           default:
                cout<<"TERIMA KASIH"<<endl;
                break;
           }
           cout<<"press any key to continue"<<endl;
           getch();
           system("cls");
     }
     while (pil<4);
}
void insert()
{
      if(rear<n-1)
      {
           cout<<endl<<"MASUKAN 1 huruf : ";
         cin>>huruf;
         doubleEndedQueue[++rear]=huruf;
}
else
    cout<<"Antrian Penuh"<<endl;
}

void print()
{
     if(front<rear+1)
     {
           for (int i=front;i<=rear;i++)
                cout<<"doubleEndedQueue["<<i<<"] = "<<doubleEndedQueue[i]<<endl;
     }
     else
           cout<<"Antrian Kosong"<<endl;
}
void hapus()
{
     if(front<=rear+1)
     {
           huruf=doubleEndedQueue[front];
           doubleEndedQueue[front++]=' ';
           cout<<"Data yang diambil : "<<huruf<<endl;
           if(front==n)
                reset();
     }
     else
           cout<<"Antrian Kosong"<<endl;
}
void Inisialisasi()
{
     front=0;
     rear=-1;
}

void reset()
{
     front=0;
     rear=-1;
}