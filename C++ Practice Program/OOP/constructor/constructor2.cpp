#include<iostream>
using namespace std;
class student{
	public:
		string name;
		int age , rollno;
		student(){
			//default constructor
			// if you want to inialize in both methods then define default constructor as well
		} 
	
	student(string n , int boda, int r){ //parametarized constructor
		name = n;
		age  = boda;
		rollno  = r;
	}	
};
int main(){
	
	student s1("Asim Ali" , 22 , 12);
	cout<<s1.name <<" "<<s1.age<<" "<<s1.rollno<<endl;
	
	student s2("Ali" , 20 , 2);
	s2.rollno = 3; //this will replace 2 . overwrite in memory
	cout<<s2.name <<" "<<s2.age<<" "<<s2.rollno<<endl;
	
	student s3;
	s3.name = "Shakira ";
	s3.age  = 80;
	s3.rollno = 34;
	cout<<s3.name <<" "<<s3.age<<" "<<s3.rollno<<endl;
	
	return 0;
}
