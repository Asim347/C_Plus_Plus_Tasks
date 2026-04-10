#include<iostream>
using namespace std;
void odd_numbers(int num){
	
	for (int i=0; i<=num; i++){
	if(i%2!=0){
	cout<<"Odd numbers "<<i<<endl;
	} 
}
}
void even_numbers(int num){
	
	for (int i=0; i<=num; i++){
	if(i%2==0){
	cout<<"Even numbers "<<i<<endl;
	} 
}
}
int main(){
int num;
cin >>num;
	odd_numbers(num);
	cout<<"\n\n";
    even_numbers(num);
	
	return 0;
}
