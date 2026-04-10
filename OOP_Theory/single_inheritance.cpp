#include<iostream>
using namespace std; 
//Create a Person class with name and age. Then create a
//Student class that inherits from
//Person and adds a roll number. Write a program to input and display the data.

class  Person{
	private:
		string name;
		int age;
	
	public:
		void setName(string n){
			name = n;
		}
		void setAge(int a){
			age = a;
		}
		string getName(){
			return name;
		}
		int getAge(){
			return age;
		}
};

class Student : public Person{
private:
	int roll;
	public:
		void setRoll(int r){
			roll = r;
		}
		int getRoll(){
			return roll;
		}
		
		void display(){
			cout<<"Name of a person is "<<getName()<<endl;
			cout<<"Age of a person is "<<getAge()<<endl;
			cout<<"Roll of a person is "<<getRoll()<<endl;
		}
};

int main() {
	Student s;
	string name;
	int age, roll;
	cout<<"Enter name of a person ";
	cin>> name;
	s.setName(name);
	
	cout<<"Enter age of a person ";
	cin>>age;
	s.setAge(age);
	
	cout<<"Enter roll no of a person ";
	cin>>roll;
	s.setRoll(roll);
	
	cout<<"Student Info... "<<endl;
	s.display();
   
    return 0;
}

