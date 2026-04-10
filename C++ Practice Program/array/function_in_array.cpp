w#include<iostream>
using namespace std;
int change(int a[]){
	a[0]=10;
}
int main(){
int b[3]={12,12,13};
for(int i=0;i<3;i++){
	cout<<b[i]<<" ";
}
cout<<endl;
change(b);
for(int i=0;i<3;i++){
	cout<<b[i]<<" ";
}
return 0;
}
