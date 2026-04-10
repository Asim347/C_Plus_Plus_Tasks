#include<iostream>
using namespace std;
int main(){
	int num;
	int factorial = 1;
	cout<<" Enter any number ";
	cin>>num;
	while  (num<0){
		cout<<" Factorial not defined for negative numbers. Please enter positive number "<<endl;
		return 0;
	}
	  while (num > 0){
		factorial *= num;
		num--;	
	} cout<<" The factoiral of given number is "<< factorial <<endl;
	

	return 0;
}
