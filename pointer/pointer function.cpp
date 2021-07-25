#include <iostream>

using namespace std;

void fungsi(int *angka){
	int hasil = *angka * *angka;
	cout<<hasil;
}

int main(){
	int angka = 10;

	fungsi(&angka);
}