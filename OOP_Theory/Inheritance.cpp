#include<iostream>
using namespace std; 
//Create a Person class with name and age. Then create a
//Student class that inherits from
//Person and adds a roll number. Write a program to input and display the data.

//class  Person{
//	private:
//		string name;
//		int age;
//	
//	public:
//		void setName(string n){
//			name = n;
//		}
//		void setAge(int a){
//			age = a;
//		}
//		string getName(){
//			return name;
//		}
//		int getAge(){
//			return age;
//		}
//};
//
//class Student : public Person{
//private:
//	int roll;
//	public:
//		void setRoll(int r){
//			roll = r;
//		}
//		int getRoll(){
//			return roll;
//		}
//		
//		void display(){
//			cout<<"Name of a person is "<<getName()<<endl;
//			cout<<"Age of a person is "<<getAge()<<endl;
//			cout<<"Roll of a person is "<<getRoll()<<endl;
//		}
//};
//
//int main() {
//	Student s;
//	string name;
//	int age, roll;
//	cout<<"Enter name of a person ";
//	cin>> name;
//	s.setName(name);
//	
//	cout<<"Enter age of a person ";
//	cin>>age;
//	s.setAge(age);
//	
//	cout<<"Enter roll no of a person ";
//	cin>>roll;
//	s.setRoll(roll);
//	
//	cout<<"Student Info... "<<endl;
//	s.display();
//   
//    return 0;
//}
//Create a Vehicle class with attributes like brand and year. Inherit a Car class that adds model, and engine capacity. 
//Create a function to input and display car details using constructor and display function.

//class Vehicle{
//	protected:
//		string brand;
//		int year;
//	public:
//		Vehicle(){}
//       Vehicle(string b, int y){
//       	brand = b;
//       	year = y;
//	   }
//};
//class Car : public Vehicle{
//	int model;
//	string capacity;
//	public:
//		Car(){}
//		Car(int m, string c, string b, int y) : Vehicle(b, y){
//			model = m;
//			capacity = c;
//		}
//		void inputdetails(){
//			cout<<"Enter brand ";
//			cin>>brand;
//			
//			cout<<"Enter year ";
//			cin>>year;
//			
//			cout<<"Enter capacity ";
//			cin>>capacity;
//			
//			cout<<"Enter mode ";
//			cin>>model;
//		}
//		void display(){
//			cout<<"Brand : "<<brand<<endl;
//			cout<<"year  : "<<year<<endl;
//			cout<<"model : "<<model<<endl;
//			cout<<"Capacity : "<<capacity<<endl;
//		}
//		
//};
//int main(){
//	Car c;
//	c.inputdetails();
//	c.display();
//	return 0;
//}

// Base class
class BankAccount {
private:
    string accountNumber;
    double balance;

public:
    // Default constructor
    BankAccount() {
        accountNumber = "";
        balance = 0.0;
    }

    // Parameterized constructor
    BankAccount(string accNum, double bal) {
        accountNumber = accNum;
        balance = bal;
    }

    void setAccountNumber(string accNum) {
        accountNumber = accNum;
    }

    string getAccountNumber() {
        return accountNumber;
    }

    void setBalance(double b) {
        balance = b;
    }

    double getBalance() {
        return balance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(double amount) {
        if (amount <= balance && amount > 0) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Insufficient balance or invalid amount!" << endl;
        }
    }
};

// Derived class
class SavingsAccount : public BankAccount {
private:
    double interestRate; // in percentage

public:
    SavingsAccount() {
        interestRate = 0.0;
    }

    SavingsAccount(string accNum, double bal, double rate) : BankAccount(accNum, bal) {
        interestRate = rate;
    }

    void setInterestRate(double rate) {
        interestRate = rate;
    }

    double getInterestRate() {
        return interestRate;
    }

    void calculateInterest() {
        double interest = (getBalance() * interestRate) / 100;
        cout << "Interest earned: " << interest << endl;
        // Optionally add to balance
        deposit(interest);
    }

    void displayDetails() {
        cout << "\n--- Account Info ---\n";
        cout << "Account Number: " << getAccountNumber() << endl;
        cout << "Balance: " << getBalance() << endl;
        cout << "Interest Rate: " << getInterestRate() << "%" << endl;
    }
};

// Main function
int main() {
    SavingsAccount acc;
    string accNum;
    double bal, rate;

    // Input details
    cout << "Enter account number: ";
    cin >> accNum;
    acc.setAccountNumber(accNum);

    cout << "Enter initial balance: ";
    cin >> bal;
    acc.setBalance(bal);

    cout << "Enter interest rate (%): ";
    cin >> rate;
    acc.setInterestRate(rate);

    // Show interaction
    acc.deposit(1000);      // Deposit money
    acc.withdraw(500);      // Withdraw money
    acc.calculateInterest();// Calculate interest
    acc.displayDetails();   // Display info

    return 0;
}

