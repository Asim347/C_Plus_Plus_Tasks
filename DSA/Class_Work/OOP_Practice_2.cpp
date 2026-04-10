#include<iostream>
using namespace std;

class Shape{
	public:
		virtual double area(){
			return 0;
		}
		virtual double perimeter(){
			return 0;
		}
};
class Rectangle : public Shape{
 private:
  double length , width;
 public:
 	Rectangle(double l, double w) : length(l), width(w){}
 	
    double area() override{
	 return length * width;
    }
    
    double perimeter() override{
	 return (2*(length + width));
	}

};

class Circle : public Shape{
 private:
  double radius;
 public:
 	Circle(double r) : radius(r){}
 	
    double area() override{
	 return 3.14 * radius * radius;
    }
    
    double perimeter() override{
	 return (2* 3.14 * radius);
	}

};

class Triangle : public Shape{
 private:
  double a , b , c;
 public:
    Triangle(double one, double two , double three) : a(one), b(two) , c(three){}
 	
    double area() override{
	 return 0.5  * a * b;
    }
    
    double perimeter() override{
	 return  a + b + c;
	}

};
void display(Shape* s){
	cout<<"Area : "<< s->area() <<endl;
	cout<<"Perimeter : " << s->perimeter() << endl;
}
int main(){
	Rectangle r(3.1 , 4);
	Circle c(5);
	Triangle t(4,3,1);
	
	display(&r);
	display(&c);
	display(&t);
	return 0;
}
