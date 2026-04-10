#include<iostream>
using namespace std;
int main(){
	    int sum = 0;
		int arr[2][3] = {21,52,37,44,32,12};
		for(int i = 0; i<2; i++){
		for (int j = 0 ; j<3; j++){
			sum = sum + arr[i][j];
       }
	}
	cout<<"Sum of array is: "<<sum;
	
	return 0;
}

