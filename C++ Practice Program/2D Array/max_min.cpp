#include<iostream>
#include<string>
using namespace std;
int main(){
	const int size = 5;
	string subject[size] = {"math","science","islam","eng","urdu"};
	int marks[5];
	for(int i =0; i<size; i++){
		cout<<"Enter score for each subjecst " << i+1 ;
		cin>>marks[i];
	}
	float average;
	float sum;
	for(int i = 0; i<size; i++){
		sum = sum + marks[i];
	}
	for(int i = 0; i<size; i++){
		average = sum / 3;
		cout<<"the average marks is " <<average<<endl;
	}
	
	int highest = marks[0];
	int lowest = marks[0];
	return 0;
}
