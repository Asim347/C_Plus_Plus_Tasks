#include<iostream>
using namespace std;
int main(){
	
	int age;
	cout<<" Enter your age ";
	cin>>age;
	while (age >= 0 && age <= 120){
		cout<<" Your age is valid "<<endl;
		cin>>age;
	   } 
       cout<<"our age is not valid. Please enter between 0 and 120"<<endl;
       
	return 0;
}
