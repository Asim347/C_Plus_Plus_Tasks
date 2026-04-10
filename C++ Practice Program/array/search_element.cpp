#include<iostream>
using namespace std;
int main(){
	int arr[5]={1,2,3,4,5};
	for(int i = 0; i<5; i++){
		cout<<arr[i]<<endl;
	}
	int find;
	cout<<"Enter number you want to find "<<endl;
	cin>>find;
	
	 bool flag = false;
	 for(int i = 0; i<5; i++){
		if(arr[i]== find) flag = true;
	}
	if(flag==true) cout<<"Element found "<<endl;
	else if(flag==false) cout<<"Element not found "<<endl;
	return 0;
}
