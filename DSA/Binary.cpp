#include<iostream>
using namespace std;
int decToBinary(int decimal){
	int ans = 0;
	int power = 1;
while(decimal > 0){
	int remainder = decimal % 2;
	decimal /= 2;
		
	ans += (remainder * power);
	power *= 10;
	}
	return ans;
}

int binaryToDec(int num){
	int ans , power = 1;
	while (num > 0){
		int rem = num % 10;
		ans += rem * power;
		
		num /= 10;
		power*= 2;
	}
	return ans;
}
int main(){
	for(int i = 0; i<=9; i++){
		cout<<"Decimal conversion of  "<< i <<" is"<<decToBinary(i)<<endl;
	}
	cout<<endl;
	cout<<"Now Binary To Decimal \n"<<endl;
	for(int i = 0; i<=9; i++){
		cout<<"Binary conversion of "<<i <<" is "<<binaryToDec(i)<<endl;
	}
	return 0;
}
