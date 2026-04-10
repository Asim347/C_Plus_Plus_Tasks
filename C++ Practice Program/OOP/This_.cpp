#include<iostream>
#include<string>
using namespace std;

class Cricketer{
	public:
	
	string name;
	int runs;
	
	Cricketer(string name, int runs){
		this->name = name;
		this->runs = runs; // it is used when we want that constructor and class varibales name should be same
	}	
};
int main(){
	
	Cricketer c1("Asim Ali" , 25000);
	
	cout<<c1.name<<" "<<c1.runs<<endl;
	return 0;
}
