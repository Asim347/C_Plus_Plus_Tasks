#include<iostream>
using namespace std;
int main(){
	
	double obtain, test, interview;
	float total_weightage;
	
	cout<<" Obtained marks in FSC out of 1200 is = ";
	cin>>obtain;
	
	cout<<" Entry test marks out of 100 is       = ";
	cin>>test;
	
	cout<<" Interview marks out of 20 is         = ";
	cin>>interview;
	
	total_weightage = ( obtain/1200 * 50) + ( test/100 * 30 ) + ( interview /20 * 10);
	
	cout<<" total weightage is " << total_weightage;
	 
	 if ( total_weightage > 75 ) {
	 	cout<<" you are eligible "<<endl;
	 } else {
	 	cout<<" you are not eligible"<<endl;
	 }
	
	return 0;
}
