#include<iostream> 
using namespace std;

class Publication {
	string title;
	float price;
public:
	void getData() {
		cout << "Enter title of publication: ";
		cin >> title;

		cout << "Enter price of publication: ";
		cin >> price;
	}

	void putData() {
		cout << "Title : " << title << endl;
		cout << "Price : " << price << endl;
	}
};

class Book : public Publication {
	int page_count;
public:
	void getData() {
		Publication::getData();
		cout << "Enter number of pages in the book: ";
		cin >> page_count;
	}

	void putData() {
		Publication::putData();
		cout << "Pages : " << page_count << endl;
	}
};

class Tape : public Publication {
	float time;
public:
	void getData() {
		Publication::getData();
		cout << "Enter total playing time of the tape (in minutes): ";
		cin >> time;
	}

	void putData() {
		Publication::putData();
		cout << "Playing Time : " << time << " minutes" << endl;
	}
};

int main() {
	Book b;
	Tape t;

	cout << "\nEnter details for book:" << endl;
	b.getData();

	cout << "\nEnter details for tape:" << endl;
	t.getData();

	cout << "\nDetails of Book:" << endl;
	b.putData();

	cout << "\nDetails of Tape:" << endl;
	t.putData();

	return 0;
}

