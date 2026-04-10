#include<iostream>
#include<string>
using namespace std;

class Student{            //here student is a data type in which we can store every type of data i.e int,float and char etc
public:	
	string name;
	int rno;
	float gpa;
};

class car{
	public:
	int model;
	string name;
	int price;
	string color;
	int seats;
};
int main(){
	cout<<"This is first class "<<endl;
	Student s1;
	s1.name = "Asim ali";
	s1.gpa  =  3.6; 
    //cin>>s1.gpa;   //input from user
	s1.rno  =  23;
	cout<<s1.name<<"   "<< s1.gpa<<"   " << s1.rno <<endl;
cout<<"This is second class "<<endl;
   car c1;
   c1.name  = "Honda City";
   c1.model = 2023;
   c1.price  = 5000000;
   c1.color  = "white";
   c1.seats  = 5;
   cout<<c1.name <<" "<<c1.model <<" "<<c1.price<<" "<<c1.color<<" "<<c1.seats<<endl;
	return 0;
}
