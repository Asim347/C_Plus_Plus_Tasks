#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<" Enter number of elements in an array ";
	cin>>n;
	int arr[n];
	for(int i =0; i<n; i++){
		cin >> arr[i];
	}
	cout<<" Entered array is ";
	for(int i = 0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	int find;
	cout<<" Enter any value you want to find ";
	cin>>find;
	int count = 0;
	for(int i=0;i<n;i++){
	if(find==arr[i]){
		count++;
	}
}
cout<<" the occurence of number is "<< count<<endl;

	return 0;
}
