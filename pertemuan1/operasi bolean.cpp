#include <iostream>

using namespace std;

void trueOrFalse(bool F){
	// F = ;
	if (F == 1){
		cout<<"True";
	}else{
		cout<<"False";
	}
}

int main(){
	int a = 5, b = 2, c = 6, d = 4;
	bool F = 1;

	if (a > b && c < d){
	 	cout<<"a > b && c > d = "; 
	 	trueOrFalse(F); cout<<endl;
	} else if(a == b || d < c){
		trueOrFalse(F);
	} 
}