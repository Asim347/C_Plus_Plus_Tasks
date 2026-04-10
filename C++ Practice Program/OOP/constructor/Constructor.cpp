#include<iostream>
#include<string>
using namespace std;

class Student{            
public:	
	string name;
	int rno;
	float gpa;
	
	Student(string n, int rn, float marks){  // It is a constructor used to initalize all varibles at once
		name = n;
		rno = rn;
		gpa = marks;
	}
};

int main(){

	Student s1("Asim Ali" , 45 , 3.2);
	Student s2("Talha   " , 22 , 4.0);
   cout<<s1.name<<"   "<< s1.gpa<<"   " << s1.rno <<endl;
   cout<<s2.name<<"   "<< s2.gpa<<"   " << s2.rno <<endl;
	return 0;
}
