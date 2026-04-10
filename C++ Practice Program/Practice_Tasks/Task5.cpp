#include<iostream>
using namespace std;
int main(){
	const int size = 15;
	int arr[size] = {10, 5, 15, 20, 45, 2, 3, 1, 6, 33, 45, 88, 55 ,50, 51};
	cout<<"Original array is : ";
	for(int i = 0; i<size; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl<<endl;
	cout<<"Reverse array is  : ";
	int i = 0;
	int j = 14;
	while (i<j){
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		i++;
		j--;
	}
	for(int i = 0; i<size; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl<<endl;
	cout<<"This is palindrome array :";
	   bool flag = true;
	  for(int i = 0; i<size/2; i++){
	  	if(arr[i]!=arr[size - i - i]){
	  		flag = false;
		  }
	  }
	  if(flag==true){
	  	cout<<"This is palindrome    "<<endl;
	  } else {
	  	cout<<"This is not palindorm "<<endl;
	  } 
	  cout<<endl;
	
    
	
	return 0;
}
