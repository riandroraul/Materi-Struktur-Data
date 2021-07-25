#include <iostream>

using namespace std;

#define MaxEl 10

int stack[MaxEl];
int top = -1;

int isEmpty(){ // mengecek apakah stack kosong
	return(top == -1) ?1 : 0;
}
int isFull(){ // mengecek apakah stack penuh
	return(top == MaxEl-1) ? 1 : 0; 
}
void push(){// menambah data
	int item;
	if (!isFull()){
		printf("\nMasukkan data stack : ");
		scanf("%d", &item);
		top++;
		stack[top] = item;
	}else{
		printf("stack penuh!");
	}
}
void pop(){//menghapus/ mengambil data
	int data;
	if(!isEmpty()){
		data = stack[top];
		top--;
		printf("Data yang diambil : %d\n", data);
	}
}
void tampil(){
	printf("isi stack adalah : ");
	for(int i=top; i>=0; i--){
		printf("%d\n", stack[i]);
	}
}

int main(){
	int pilih;
	do{
		cout<<"1. Push\n";
		cout<<"2. Pop\n";
		cout<<"3. Tampil data\n";
		cout<<"4. Exit\n";
		printf("Pilih menu (1-4)\n");
		scanf("%d", &pilih);

		switch(pilih){
			case 1:
				push();
			break;
			case 2:
				pop();
			break;
			case 3:
				tampil();
			break;
			case 4:
				exit(0);
			break;
			default: 
				printf("pilihan menu salah!");
		}
	} while (pilih != 4);
	return 0;
}