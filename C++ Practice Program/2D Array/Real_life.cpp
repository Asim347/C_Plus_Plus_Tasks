#include<iostream>
using namespace std;
int main(){

	int marks[5][3] = {{90,78,56},{60,48,66},{10,58,36},{20,48,86},{80,45,65}};
	int topper = -1;
	int highest = -1;
	for(int i = 0;i<5; i++){
		int total = 0;
		for(int j = 0; j<3; j++){
			total += marks[i][j];
		}
		cout<<"Total marks for student "<<(i+1)<<"  " << total <<endl;
		if(total> highest){
			highest = total;
			topper = i;
		}
	}
	cout<<endl;
	for(int i = 0; i<5; i++){
		int high = marks[i][0];
		int low =  marks[i][0];
		for(int j = 0; j<3; j++){
			if(marks[i][j]>high) high = marks[i][j];
			if(marks[i][j]<low) low = marks[i][j];
		}
		cout<<"Highest marks is for student "<<(i+1)<<" in three subject is :"<<high<<endl;
	    cout<<"lowest marks is for student  "<<(i+1)<<" in three subject is :"<<low<<endl;
	    cout<<"------------------------------------------------------"<<endl;
	}
	cout<<"The topper is "<<(topper + 1) <<" with marks " << highest <<endl;
	
	
	
	return 0;
}
