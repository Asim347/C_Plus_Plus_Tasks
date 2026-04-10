#include<iostream>
using namespace std;
int main(){
	int age;
	cout<<" enter your age ";
	cin>>age;
	
	if ( age>0 && age < 18)
	cout<<" Your are under age " <<endl;
	
	else if ( age >= 18 && age < 64)
	cout<<" You are an adult  " <<endl;
	
	else if ( age >=65 )
	cout<<" You are senior " <<endl;
 	
	else {
		cout<<" age cannot be negative "<<endl;
	}
	
	
	
	
	return 0;
}
