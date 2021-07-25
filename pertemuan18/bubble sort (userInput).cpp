#include <iostream>
#include <conio.h>
using namespace std;
    int data[10], data2[10];
    int n;
    
int tukar (int nilai1,int nilai2){
    int t;
    t=data[nilai2];
    data[nilai2]=data[nilai1];
    data[nilai1]=t;
}

void input(){
    cout<<"\tMasukan Jumlah Data = ";
cin>>n;

cout<<endl;
    
    for (int i=0;i<n;i++){
    	cout<<"\tMasukan Data Ke-"<<i+1<<" = ";
    	cin>>data[i];
    	
    	data2[i]=data[i];
	}
	cout<<endl;	
}

int tampil(){
	for (int i=0;i<n;i++){
	     cout<<"\t["<<data[i]<<"] ";
	}
	cout<<endl;
}

int bubble_sort(){
	for (int i=1; i<n;i++){
		for (int j=n-1; j>=i;j--){
			if (data[j]<data[j-1]){
				tukar(j,j-1);
			}
		}
		tampil();
	}
	cout<<endl;
}


int main()
  {
  	cout<<"\n\tSORTING MENGGUNAKAN BUBBLE SORT"<<endl;
  	cout<<"\t================================="<<endl;
	input();
	cout<<"\n\tProses Bubble Sort"<<endl;
	tampil();
	bubble_sort();
  getch();
  }