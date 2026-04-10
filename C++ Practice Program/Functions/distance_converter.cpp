#include<iostream>
using namespace std;
void converter(float distance){
	float miles;
	miles = 0.6 * distance;
	cout<<" Distance in miles is " << miles ;
} 
int main(){
	
	float distance ;
	cout<<" Enter distance in kilometer to convert to miles ";
	cin>>distance;	
	converter(distance);
	return 0;
}
