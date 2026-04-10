#include<iostream>
using namespace std;
class Element{
	int value;
	public:
		Element(){
			cout<<"Element constructed "<<endl;
		}
		void put(int val){
			value = val;
		}
		int get(){
			return value;
		}
};
class Collection{
	Element e1, e2;
	public:
		Collection(){
			cout<<"Collection constructed "<<endl;
		}
		int get(int elno){
			return elno == 1 ? e1.get() : e2.get(); 
		}
		void put(int elno, int val){
			elno == 1? e1.put(val) : e2.put(val); 
		}
};

int main(){
	Collection coll;
	return 0;
}
cout<<"------------------------------------------------------------------------------------------- \n";
class A{
	public:
		A(){
			cout<<"Constructor A is called "<<endl;
		}
		~A(){
			cout<<"Constructor A is destroyed "<<endl;
		}
};
class B{
	A objA;
	public:
		B(){
			cout<<"Constructor B is called "<<endl;
		}
		~B(){
			cout<<"Constructor B is destroyed "<<endl;
		}
};
class C{
	B objb;
	A obja;
	public:
		C(){
			cout<<"Constructor C is called "<<endl;
		}
		~C(){
			cout<<"Constructor C is destroyed "<<endl;
		}
};
int  main(){
	C objc;
	return 0;
}
cout<<"------------------------------------------------------------------------------------------- \n";
// confusing
class X {
public:
    X() {
        cout << "Constructor X is called" << endl;
    }
    ~X() {
        cout << "Destructor X is called" << endl;
    }
};

class Y {
    X objX;
public:
    Y() {
        cout << "Constructor Y is called" << endl;
    }
    ~Y() {
        cout << "Destructor Y is called" << endl;
    }
};

class Z : public Y {
    X objX;
    Y objY;
public:
    Z() {
        cout << "Constructor Z is called" << endl;
    }
    ~Z() {
        cout << "Destructor Z is called" << endl;
    }
};

int main() {
    Z objZ;
    return 0;
}
