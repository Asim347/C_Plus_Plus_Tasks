#include<iostream>
using namespace std;
int main(){
	//this code is for just copying the elements
	int arr[5]={1,2,3,4,5};
	int b[5];
	cout<<"This is copying code "<<endl;
	for(int i = 0; i<=4; i++){
		b[i]=arr[i];
		cout<<b[i]<<" " ;
	} 
	cout<<endl;
	// this code is for copying in reverse order
	cout<<"this is copying but in reverse direction "<<endl;
    for(int i = 0; i<5; i++){
     int j = 5 - 1 - i; //5 means n which is size of array
   	b[i] = arr[j];
   	cout<<b[i]<<" ";
 }


	return 0;
}
