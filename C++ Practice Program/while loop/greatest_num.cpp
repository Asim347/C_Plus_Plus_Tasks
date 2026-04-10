#include<iostream>
using namespace std;
int main(){
	int num1, num2, num3;
	cout<<"Enter first number ";
	cin>>num1;
	cout<<"Enter second number ";
	cin>>num2;
	cout<<"Enter third number ";
	cin>>num3;
	
	while (num1<0 || num2 < 0 || num3 <0){
		cout<<" Exit"<<endl;
		cout<<" Please enter positive numbers "<<endl;
		cin>>num1>>num2>>num3;
		return 0;
		
	} while (num1 >= num2 && num1 >= num3){
		cout<<" Num1 is greatest "<<num1<<endl;
    }  
  
     while (num2 >= num1 && num2 >= num3 ){
	cout<<" Num2 is greatest "<<num2<<endl;
    }  

     cout<<" Num3 is greatest "<<num3<<endl ;

	cout<<" THis is the greatest number";
	return 0;
}
