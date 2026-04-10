#include<iostream>
using namespace std;
int main(){
	double sum = 0; 
	double average ;
const int size = 15;

	int arr[size] = {10, 5, 15, 20, 45, 2, 3, 1, 6, 33, 45, 88, 55 ,50, 51};

	for(int i = 0; i<size; i++){
		
		sum += arr[i];
	}
	cout<<"The SUM of array is                  : "<<sum<<endl;
		
		average = sum/size;
	
	cout<<"The AVERAGE of array is :            : "<<average<<endl;
	
	int max = arr[0];
	for(int i = 0; i<size; i++){
		if(max<arr[i]){
			max = arr[i];
		}
	}
	cout<<"The maximum value among the array is : "<<max<<endl;
	
	int min = arr[0];
	for(int i = 1; i<size; i++){
		if(min>arr[i]){
			min = arr[i];
		}
	}
	cout<<"The minimum value among the array is : "<<min<<endl;
	
	 int smax = arr[0];
	for(int i = 0; i<size; i++){
		if(max!=arr[i] && smax<arr[i]){
			smax = arr[i];
		}
	}
	cout<<"The second maximum value  is         : "<<smax<<endl;
	cout<<"This is multiple of 10 : ";
	for(int i = 0; i<size; i++){
		cout<<arr[i]*10<<" ";
	}
	cout<<endl;
   int count = 0; 
	for(int i = 0; i<size; i++){
		if(arr[i]%2==0) count++;
	}
	cout<<"The even number in array are         :"<<count<<endl;
	
	int counts = 0; 
	for(int i = 0; i<size; i++){
		if(arr[i]%2!=0) counts++;
	}
	cout<<"The odd number in array are          :"<<counts<<endl;
	
	int search;
	cout<<"Enter any number you want to find ";
	cin>>search;
	bool flag = false;
	for(int i = 0; i<size; i++){
		if(search==arr[i]) 
		{
		cout<<"At position "<<i+1<<" and index is  "<< i <<endl;
		flag = true;
	}
	}
	if(flag==true) cout<<"Element found "<<endl;
	else if(flag==false) cout<<"Element not found "<<endl;
	
	int occurs = 0;
	cout<<"Enter number to check its occurence ";
	cin>>search;
	for(int i = 0; i<size; i++){
		if(search==arr[i]) occurs++;
	}
	cout<<"The number has occured "<<occurs<<" times ";
	
	
	
	
	return 0;
}
