#include<iostream>
using namespace std;
int main(){
   double  num = 0.0 ,  avg = 0.0 , sum = 0.0;
   int count;
	
	cout << "Enter numbers to track the maximum (enter 0 to stop):" << endl;
	
	while (true ){
		cout<<" Enter any number ";
    	cin>>num;
	 if (num == 0){
		break;
	}
		sum += num;
		count++;
    if (num > 0){
    	avg = sum / count;
    	cout<<"The average of entered numbers is "<<avg<<endl;
	}
	else {
		cout<<" No numbers were entered "<<endl;
	}
	}
	cout<<" avgerage is "<<avg<<endl;
	return 0;
}
