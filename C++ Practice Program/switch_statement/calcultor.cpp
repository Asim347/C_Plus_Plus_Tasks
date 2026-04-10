#include<iostream>
using namespace std;
int main(){
	
	double num1, num2, result;
	char operation;
	cout<<" Enter num1 ";
	cin>>num1;
	cout<<" Enter num2 ";
	cin>>num2;
	cout<<"1.  Addition       "<<endl;
	cout<<"2.  Multiplication "<<endl;
	cout<<"3.  Subtraction    "<<endl;
	cout<<"4.  Division       "<<endl;
	cout<<" Enter an operation ";
	cin>>operation;
	switch (operation ){
		case '1':
		result = num1 + num2;	
			cout<<num1<<" + "<< num2 <<" =  " <<result << endl;
			break;
	case '2':
		result = num1 - num2;	
			cout<<num1<<" - "<< num2 <<" =  " <<result << endl;
	        break;
	case '3':
		result = num1 * num2;	
			cout<<num1<<" * "<< num2 <<" =  " <<result << endl;	
	        break;
	case '4':
		result = num1 / num2;	
			cout<<num1<<" / "<< num2 <<" =  " <<result << endl;			
               break;
	}
	
	
	
	
	
	return 0;
}
