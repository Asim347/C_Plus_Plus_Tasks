#include<iostream>
using namespace std;
int main(){
    int n , temp , digit , length = 0;
	int digits[10];
	cout<<"Enter any numbers ";
	cin>>n;
    temp = n;
    while (temp > 0){
    	digit = temp % 10;
    	digits[length]= digit;
    	length++;
    	temp /= 10;
	}

    bool ispadlidome = true;
    for(int i = 0; i < length/2; i++){
    	if(digits[i]!=digits[length - 1- i]){
		
    	ispadlidome = false;
    	break;
    	}
	}
    if(ispadlidome){
    	cout<<n<<" This is palidrome "<<endl;
	}
	else {
		cout<<n<<" This is not palidrome "<<endl;
	}
	
	return 0;
}
