#include<iostream>
using namespace std;
int main()
{
	// && and usage
	/*int x;
	cout<<"enter a value for x: ";
	cin>>x;
	
	if(x%3==0 && x%5==0)
      	cout<<"divisible"<<endl;
	
	else
	
    	cout<<"not divisble";*/
    	
    	
    	//|| or usage
    	/*int x;
	cout<<"enter a value for x: ";
	cin>>x;
	
	if(x%3==0 || x%5==0)
      	cout<<"divisible"<<endl;
	
	else
	
    	cout<<"not divisble";*/
    	
    	
   /* int x , y, z;
	cout<<"enter a value for x, y, z: ";
	cin>>x>>y>>z;
	
	if(x + y >z && y + z>x && x + z> y ) 
      	cout<<"valid triangle"<<endl;
	
	else
	
    	cout<<"invalid triangle";*/
    		
    	
     int x , y, z;
	cout<<"enter a value for x, y, z: ";
	cin>>x>>y>>z;
	
	if(x<y && x<z ) 
      	cout<<"x is least"<<endl;
		if(y<x && y<z )
	cout<<"y is least"<<endl;	
	else
	
    	cout<<"z is least";	
    	
    	
    	
    	
    	
return 0;	
}
