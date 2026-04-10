#include<iostream>
using namespace std;
int main(){
   int a = 12;
   int choice;
   cout<<" Enter your choice ";
   cin>>choice;
   while (choice != a){
   	cout<<" Wrong number. Please try again..."<<endl;
   		cin>>choice;
   }
   cout<<" You match it. ";		
	return 0;
}
