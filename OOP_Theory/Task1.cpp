#include<iostream>
using namespace std;
class Animal{
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
			
            
            void speak(){
            	cout<<"Animal makes a sound!"<<endl;
			}
};
class Dog : public Animal{
	public:
		Dog() {}
		Dog(string na, int ag) {
		setname(na);
		setage(ag);
		}
		void speak(){
			cout<<"Woof Woof! "<<endl;
		}
};
class Cat : public Animal{
	public:
		Cat (){}
		Cat(string na, int ag) {
		setname(na);
		setage(ag);
		}
		void speak(){
			cout<<"Meow! Meow! "<<endl;
		}
};
int main(){ 
    Cat c1;
    Dog d1;

    c1.setname("Luna");
    c1.setage(2);
    d1.setname("Max");
    d1.setage(1);

    cout << "Cat Name: " << c1.getname() << ", Age: " << c1.getage() << endl;
    cout << "Dog Name: " << d1.getname() << ", Age: " << d1.getage() << endl;

    c1.speak();
    d1.speak();
	return 0;
}
