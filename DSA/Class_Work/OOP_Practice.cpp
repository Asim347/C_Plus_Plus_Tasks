#include<iostream>
using namespace std;

class Student{
	private:
		string name;
		int rollNumber;
		float gpa;
	public:
	Student(string n, int r, float g){
		name = n;
		rollNumber = r;
		gpa = g;
	}
	string getName(){
		return name;
	}
	int get_Roll_Number(){
		return rollNumber;
	}
	float get_gpa(){
		return gpa;
	}
	string is_Student_Happy(){
		return  (gpa>=3.5) ? "Student is Happy! " : "Student is not Happy! " ;
	}
	friend ostream& operator<<(ostream& out, Student& s);
};
ostream& operator<<(ostream& out,  Student& s) {
    out << "Name: " << s.getName()
        << "\nRoll Number: " << s.get_Roll_Number()
        << "\nGPA: " << s.get_gpa()
        << "\n" <<s.is_Student_Happy();
    return out;
}
int main(){
	Student s1("Asim" , 20, 3.8 );
	cout<< s1<<endl;
}
