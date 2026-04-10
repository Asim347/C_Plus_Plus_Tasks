#include<iostream>
using namespace std;
class Person{
	private:
		string name;
		int age;
	public:
		void setname(string na){
		name = na;
		}
		string getname() {
		return name;
		}
            
        void setage(int a) {
		age = a;
		}
			 
        int  getage() {
        return age;
		}
			
            
        void displayPersoninfo(){
            	cout<<"Name of Person is "<<name<<endl;
            	cout<<"Age of Person is "<<age<<endl;
			}
};
class Employee{
private:
	string ID;
	float salary;
public:
	void setId(string id){
	ID = id;
	}
	string getID() {
	return ID;
    }
            
    void setsalary(float a) {
	salary = a;
    }
			 
    float  getsalary() {
    return salary;
	}
     void displayEmployeeinfo(){
            	cout<<"ID of Employee is "<<ID<<endl;
            	cout<<"Salary of Person is "<<salary<<endl;
			}
};
class Manager : public Person, public Employee{
	public:
		Manager ( ) {
		}
	Manager(string name, string id, float sal, int age) {
		setname(name);
		setage(age);
		setId(id);
		setsalary(sal);
	}
	void displayManagerinfo (){
	displayPersoninfo();
	displayEmployeeinfo();
	}
};
int main(){
	Manager m;
	
	m.setname("Umar");
	m.setage(20);
	m.setId("AA201");
	m.setsalary(345634.43);


    m.displayManagerinfo();
	return 0;
}
