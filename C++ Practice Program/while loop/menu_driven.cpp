#include<iostream>
using namespace std;
int main(){
	
	double a, b;
	char operation;

	cout<<"1.  Addition       "<<endl;
	cout<<"2.  Subtraction  "<<endl;
	cout<<"3.  Multiplication    "<<endl;
	cout<<"4.  Division       "<<endl;
	cout<<"5.  Exit           "<<endl;
	while (true){
		cout<<" Enter any number between (1-5)"<<endl;
		cin>>operation;
		
		if (operation == '5'){
			cout<<" Exit the program"<<endl;
	        break;
		}
	 
		cout<<" Enter a ";
		cin>>a;
		cout<<" enter b ";
		cin>>b;
		
		switch (operation ){
			case'1':
				cout<<" Result is " <<a+b<<endl;
				break;
				
			case'2':
				cout<<" Result is " <<a-b<<endl;
				break;	
			case'3':
				cout<<" Result is " <<a*b<<endl;
				break;
				
			case'4':
				cout<<" Result is " <<a/b<<endl;
				break;	
				default :
				cout<<" Invalid option "<<endl;	
		}
		
}

	
	
	return 0;
} 
	
