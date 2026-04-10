#include<iostream>
#include<string>
using namespace std;

class Account{
	public:
		string name;
		float balance;
		int accountNumber;
		float withdraw();
		float deposit();
};
 
 float Account::withdraw(){
			int amount;
			cout<<"Enter amount you want to withdraw "<<endl;
			cin>>amount;
			int khan = balance - amount;
			return  khan;
		}

float Account::deposit(){
	int money;
	cout<<"Enter amount you want to deposit ";
	cin>>money;
	
	float newamount = balance + money;
	return newamount;
}

int main(){
	
	Account A1;
	A1.name = "Asim Ali";
	A1.balance = 34242.3;
	A1.accountNumber = 123;
	
	cout<<A1.name<<endl;
	
	cout<<"Current Balance is "<<A1.balance<<endl;
	
	cout<<"Accounr Number is "<<A1.accountNumber<<endl;
	
	float kus = A1.withdraw();
	cout<<"Remaining balance is "<<kus<<endl;

	float kona = A1.deposit();
	cout<<"New balance is "<<kona;
	
	return 0;
}
