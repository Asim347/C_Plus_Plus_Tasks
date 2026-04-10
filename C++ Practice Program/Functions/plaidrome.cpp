#include <iostream>
using namespace std;

bool palid(int num){
	int original = num;
	int rever = 0;
	while(num>0){
		int lastdigit = num % 10;
		rever = rever * 10 + lastdigit;
		num = num / 10;
	}
	return original == rever;
}
int main(){
	int num;
	cout<<"Enter any numbers ";
	cin>>num;
	if(palid(num)){
		cout<<"This is palidome ";
	}
	else cout<<"This is not ";

    return 0;
}

