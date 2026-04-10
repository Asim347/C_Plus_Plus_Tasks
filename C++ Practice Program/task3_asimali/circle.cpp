#include<iostream>
using namespace std;
int main()
{
	int diemeter  = 20;
	int area;
	int radius    = diemeter/2;
	const float PIE = 3.14;
	
	
	cout<<"Diemeter of circle is   = "<<diemeter<<"   meters"<<endl;
	cout<<"Radius of circle is     = "<<radius<<"   meters"<<endl;
	area = PIE*radius*radius ;
	
	cout<<"The calculated area of circle is: " << area << "  square meters"<<endl;
	
	
	return 0;
}
