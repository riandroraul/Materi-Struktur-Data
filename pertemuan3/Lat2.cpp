#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
	typedef struct{
		int NO;
		int nilai;
	}strNode;
	strNode *P;

	P = (strNode*)malloc(sizeof(strNode));
	P->NO = 25;
	P->nilai = 85;

	printf("No : %d\n", P->NO);
	printf("Nilai : %d\n", P->nilai);

	cout<<&P->nilai<<endl;
	cout<<&P->NO;

	int i = 4;
	 
}