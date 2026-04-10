#include<iostream>
using namespace std;
int main(){
	
	char payment;
	
	cout<<" 1. for cash "<<endl;
	cout<<" 2. for Credit card "<<endl;
	cout<<" 3. for Paypal "<<endl;
	cout<<" Enter a number (1-3) ";
	cin>>payment;
	switch (payment){
		case '1':
			cout<<" You selected cash. There are no processing fee and your transaction is immediate"<<endl;
			break;
		
		case '2':
		    cout<<" You selected Credit card. Please note that processing fee is 2.5%."<<endl;
			break;	
			
			
		case '3':
		    cout<<" You selected Paypal . Payments are secure and while a fee 3% may apply to your transaction. "<<endl;
			break;	
		
		default :
		 cout<<" Please enter a number between 1 and 3"<<endl;
		 	
	}
	
	return 0;
}
