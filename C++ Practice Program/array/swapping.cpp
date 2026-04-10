#include<iostream>
using namespace std;
int main(){
	int arr[]={1,2,3,4,5};
       int n = sizeof(arr)/4;
       for (int i =0; i<n; i++){
       	cout<<arr[i]<<" ";
	   }
	   
		int j = n-1;
		int i = 0;
		while (i < j){
			int temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			i++;
			j--;
		}
		cout<<endl;
		for (int i =0; i<n; i++){
       	cout<<arr[i]<<" ";
//       	if(arr[i]!=arr[j]);
//       	break;
	   }
	
	return 0;
}
