#include<iostream>
#include<climits>
using namespace std;
int main(){
int arr[8]={12,12,1,32,21,9,16,13};
 int max = arr[0]; //first method
 int min = arr[0]; //first method
 //int max = INT_MIN;
 //int min = INT_MAX;
for(int i=1;i<=8-1;i++){
	if(arr[i]>max) max = arr[i];
	if(arr[i]<min) min = arr[i];
}
 int smax = INT_MIN;
 int smin = INT_MAX; 
for(int i=0;i<8;i++){
	if(arr[i] != max && arr[i]>smax) smax = arr[i];  //second largest value in array
	if(arr[i] != min && arr[i]<smin) smin = arr[i];
}
cout<<"First maximum is "<<max<<endl;
cout<<"First minimum is "<<min<<endl;
cout<<"Second maximum is "<<smax<<endl;
cout<<"Second minimum is "<<smin<<endl;

return 0;
}
