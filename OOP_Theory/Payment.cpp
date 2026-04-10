#include<iostream>
using namespace std;
class Payment{
	public:
		virtual void Pay() = 0;
};
class CreditCard : public Payment{
	public:
		void Pay() override{
			 cout<<"Credit card derived class "<<endl;
		}
		
};

class Paypal : public Payment{
	public:
		void Pay() override{
			 cout<<"Paypal derived class "<<endl;
		}
		
};
class Cash : public Payment{
	public:
		void Pay() override{
			 cout<<"Cash derived class "<<endl;
		}
		
};
void Display(Payment* p){
	p->Pay();
}
int main(){
	Payment* payment;
	Cash cash;
	CreditCard creditcard;
	Paypal paypal;
	
	Display(&paypal);
	Display(&cash);
	Display(&creditcard);
	return 0;
}
