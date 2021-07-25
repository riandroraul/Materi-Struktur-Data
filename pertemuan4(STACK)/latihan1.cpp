#include <iostream>
#define MaxEl 10
using namespace std;

 	struct Stack{
		int top = -1;
	 	int data[10];
 	};
 	Stack stack;

void setNilaiAwal(){
	stack.top = -1;
}

bool isEmpty(){
	if (stack.top == -1){
		return 1;
	}else {
		return 0;
	}
}
bool isFull(){
	if (stack.top == 9){
		return	1;
	}else{
		return 0;
	}
}
void push(int input){
	stack.top++;
	stack.data[stack.top] = input;
}

int pop(){
	return stack.data[stack.top];
}
void printData(){
	cout<<"Data : "<<endl;
	for (int i = 0; i <= stack.top; i++)
	{
		cout<<stack.data[i]<<", ";
	}
}

int main(){
	int pilih, input;
	
	do{
		cout<<"\n1. Push Data\n";
		cout<<"2. Pop Data\n";
		cout<<"3. Cetak Data\n";
		cout<<"4. Hapus Data\n";
		cout<<"5. Exit\n";
		cout<<"Pilih (1 - 5) : ";
		cin>>pilih;
		switch(pilih){
			case 1:
				if (isFull() == 1){
					cout<<"Stack Penuh\n";
				}else{
					cout<<"Data yang akan di push : ";
					cin>>input;
					push(input);
				}
			break;
			case 2:
				if(isEmpty() == 1){
					cout<<"Stack Kosong\n";
				}else{
					cout<<"Data Yang akan di pop : "<<pop()<<endl;
				}
			break;
			case 3:
				if(isEmpty() == 1){
					cout<<"Stack Kosong\n";
				}else{
					printData();
				}
			break;
			case 4:
				setNilaiAwal();
			break;
		}
	} while (pilih >= 1 && pilih <= 4);

}
