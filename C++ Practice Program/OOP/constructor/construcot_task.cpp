#include<iostream>
#include<string>
using namespace std;

class Book{
	public:
	string title;
	string author;
	int publication_year;
	
	Book(){
		title = "Unknown";
		author = "Unknown";
		publication_year = 0;
	}
	
	Book(string n , string t, int year){
		title = t;
		author = n;
		publication_year = year;
	}
	
	void display(){
		cout<<"The name of book is "<<title<<endl;
		cout<<"The name of author is "<<author<<endl;
		cout<<"The year of publication is "<<publication_year<<endl;
	}
};

int main(){
	string name;
	string title;
	int year;
	cout<<"Enter name of Book ";
	getline(cin,title);
	cout<<"Enter author name of Book ";
	getline(cin,name);
	cout<<"Enter publication of year ";
	cin>>year;
	
	Book b1(title , name , year);
	Book b2;
	b1.display();
	cout<<endl;
	b2.display();
	return 0;
}
