#include<iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    Person(string n, int a) {
        name = n;
        age = a;
    }
    virtual void display() = 0;  // pure virtual function
};

class Teacher : public Person {
    string subject;
public:
    Teacher(string s, string n, int a) : Person(n, a) {
        subject = s;
    }
    void display() override {
        cout << "Name: " << name << " , Age: " << age << endl;
        cout << "Subject: " << subject << endl;
    }
};

class Student : public Person {
    int StudentID;
public:
    Student(int id, string n, int a) : Person(n, a) {
        StudentID = id;
    }
    void display() override {
        cout << "Name: " << name << " , Age: " << age << endl;
        cout << "Student ID: " << StudentID << endl;
    }
};

class Department {
    string name;
    Teacher* teacher[10];
    Student* student[10];
    int teachercount, studentcount;
public:
    Department(string n) {
        name = n;
        teachercount = 0;
        studentcount = 0;
    }

    void addteacher(Teacher* t) {
        if (teachercount < 10) {
            teacher[teachercount++] = t;
        }
    }

    void addStudent(Student* s) {
        if (studentcount < 10) {
            student[studentcount++] = s;
        }
    }

    void displayinfo() {
        cout << "\nDepartment: " << name << endl;

        cout << "Teachers:\n";
        for (int i = 0; i < teachercount; i++) {
            teacher[i]->display();
        }

        cout << "Students:\n";
        for (int i = 0; i < studentcount; i++) {
            student[i]->display();
        }
    }
};

int main() {
    Department objcs("Computer Science");
    Department objmath("Mathematics");

    Teacher prof1("Computer Science", "Asim", 40);
    Teacher prof2("Calculus", "Ali", 20);

    Student stud1(101, "Khan", 12);
    Student stud2(102, "Gul", 13);

    objcs.addteacher(&prof1);
    objmath.addteacher(&prof2);

    objcs.addStudent(&stud1);
    objmath.addStudent(&stud2);

    objcs.displayinfo();
    objmath.displayinfo();

    return 0;
}

