#include<iostream>
#include<string>
using namespace std;

class car{
	public:
	int model , seats , price;
	
	string name , color;
};
void print(car c){
	cout<<c.name<<endl;
	cout<<c.model<<endl;
	cout<<c.price<<endl;
	cout<<c.color<<endl;
	cout<<c.seats<<endl;
}
void change(car& c){
	c.name = "Swift";
}
int main(){
	cout<<"This is first class "<<endl;
   car c1;
   c1.name  = "Honda City";
   c1.model = 2023;
   c1.price  = 5000000;
   c1.color  = "white";
   c1.seats  = 5;
   
   print(c1);
   
   change(c1); // pass by reference
   
   cout<<endl<<endl;
   print(c1);
   
   
   cout<<endl<<endl;
   
   
   cout<<"This is second class "<<endl;
   car c2;
   c2.name  = "City";
   c2.model = 2025;
   c2.price  = 500000;
   c2.color  = "black";
   c2.seats  = 3;
   
   print(c2); //this is pass by value
   
	return 0;
}
