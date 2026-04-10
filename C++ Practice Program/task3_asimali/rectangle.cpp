#include<iostream>
using namespace std;
int main()
{
	int width  = 20;
	int length = 60;
	int area , perimeter;
	
	cout<<"width of Rectangle       =  "<< width<<"  meters"<<endl;
	cout<<"length of Rectangle      = "<< length<<" meters"<<endl;
	area = width*length;
	cout<<"-----------------------------------"<<endl;
	
	cout<<"Area of Retangle is      : "<< area <<" meters"<<endl;
	perimeter =2*(length + width);
	cout<<"Parameter of Retangle is : "<< perimeter<<" meters"<<endl;
	
	cout<<"-----------------------------------"<<endl;
	
	
	return 0;
}
