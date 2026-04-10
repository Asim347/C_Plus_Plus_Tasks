#include<iostream>
#include<string>
using namespace std;
bool status(float average){
	if(average>50){
		return true;
	}else{
		return false;
	}
}
float avg(int sum){
	int average = sum/3.0;
	return average;
}
int total(int marks[3]){
	int sum=0;
	for(int i = 0; i<3; i++){
		sum += marks[i];
	}
	return sum;
}
void details(string &name, int &age, int marks[3]){
	cout<<"Enter student name ";
	cin>>name;
	cout<<"Enter student age ";
	cin>>age;
	for(int i = 0; i<3; i++){
		cout<<"Enter subject " <<( i + 1)<<" ";
		cin>>marks[i];
	}
}
int main(){
	
	string name;
	int age;
	int marks[3];
	
	details(name,age,marks);
	int n = total(marks);
	float khan = avg(n);
	bool gg = status(khan);
	cout<<"studen name is "<<name<<endl;
	cout<<"Studen age is "<<age<<endl;
	cout<<"Total marks of student are "<<n<<endl;
	cout<<"average marks of student are "<< khan <<endl;
	cout<<"The status of student is "<<gg<<endl;
	return 0;
	
}

