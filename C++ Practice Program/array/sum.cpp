#include<iostream>
using namespace std;
int change(int a[]){
	a[0]=10;
}
int main(){
	int sum = 0;
int arr[3]={12,12,13};
for(int i=0;i<3;i++){
	cout<<arr[i]<<endl;
	sum = sum + arr[i];
}
cout<<"sum is "<<sum;
return 0;
}
