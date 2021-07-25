#include <iostream>
using namespace std;

union BilBulat {
	unsigned int bInt;
	unsigned char cKar[4];
};

int main(){
	BilBulat bil;
	bil.bInt = 0x56782233;

	cout<<"bInt : "<<hex<<bil.bInt<<endl;
	for (int i = 0; i < 4; ++i){
		cout<<"cKar["<<i<<"]"<<hex<<int(bil.cKar[i])<<endl;
	}
}