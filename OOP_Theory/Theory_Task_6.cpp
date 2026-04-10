#include <iostream>
using namespace std;
class Shape { // the names of all the classes start with a Capital letter
	private:
		int id;
	public:
		Shape(int value) : id(value) {
			cout << "id: " << id << " Constructor of Shape " << endl;
		}

	int getId() const{ // added const - for safety to avoid changes to dadta.
		return id;
	}
	
	virtual void Draw() { // added virtual - this will allow dynamic polymorphism
		cout << "Id: " << id << " Drawing a Shape " << endl;
	}
	
	virtual ~Shape(){} // good practice, helps in cleaning up when object is deleted.
};

class Traingle : public Shape {
	private:
		int* points; // we do not initialize the data-members here.
	public:
		Traingle(int value) : Shape(value) {
			points = new int(3) ; // better to initilize in the constructor.
			cout << getId() << " Constructor of Traingle\n";
		}
	
	void Draw() override {
		cout << getId() << " Drawing a Traingle\n";
	}
	
	~Traingle() override{
	 delete[] points; // free the occupied memory.
	}
};

class Square : public Shape {
	private:
		int* points ;
	public:
		Square(int value) : Shape(value) {
			points = new int(4) ;
			cout << getId() << " Constructor of Square\n";
		}

	void Draw() override {
		cout << getId() << " Drawing a Square\n";
	}
	
	~Square() override{
		 delete[] points;
	}
};

void drawShape(Shape& shape) {
	shape.Draw(); // we made this outside, now this is accessible for the classes.
}

int main() {
	Shape shape(1); // well defined names for the objects.
	
	Traingle triangle(2);
	cout << endl;
	
	Square square(3);
	cout << endl;
	
	drawShape(shape);
	cout << endl;
	
	drawShape(triangle);
	cout << endl;
	
	drawShape(square);
	cout << endl;
	
	return 0;
}
