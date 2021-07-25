#include <iostream>
using namespace std;

typedef struct {
	char nim[20];
	char nama[30];
	int nilai;
} mhs;

mhs mahasiswa1;

int main(void){
	cout<<"Nim Mahasiswa : ";
	cin.getline(mahasiswa1.nim, 20);
	cout<<"Nama Mahasiswa : ";
	cin.getline(mahasiswa1.nama, 30);
	cout<<"Nilai Mahasiswa : ";
	cin>>mahasiswa1.nilai;

	printf("============== Daftar Mahasiswa ==============\n");
	printf("Nama Mahasiswa : %s\n", mahasiswa1.nim);
	printf("Nim Mahasiswa : %s\n", mahasiswa1.nama);
	printf("Nilai Mahasiswa : %d\n", mahasiswa1.nilai);

}