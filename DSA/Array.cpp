#include<iostream>
using namespace std;
int main(){
	
	cout<<"Smallest Value \n"<<endl;
	int smallest = INT_MAX;
	int index  ;
	int marks[5] = {12,22,33,44,-55};
	for(int i = 0; i<5; i++){
		if(marks[i] < smallest){
			smallest = marks[i];
			index = i;
		}
		
	}
	cout<<"Smallest "<<smallest<<endl;
	cout<<"Index "<<index;
	return 0;
}
