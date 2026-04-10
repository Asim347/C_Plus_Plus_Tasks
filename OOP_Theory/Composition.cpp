#include<iostream>
using namespace std;
class Element{
	int value;
	public:
		int Get(void){
			return value;
		}
		void Put(int val){
			value = val;
		}
};
class Collection{
	Element el1, el2;
	public:
		int Get(int elno){
			return elno == 1 ? el1.Get() : el2.Get();
		}
		void Put(int elno, int val){
			if(elno == 1)el1.Put(val) ; else el2.Put(val);
		}
};
int main(){
	Collection coll;
	for(int i = 1; i<=2 ; i++){
		coll.Put(i,i+1);
	}
	for(int i = 1; i<=2; i++){
		cout<<"Element # "<<i<<" = "<<coll.Get(i)<<endl;
	}
	return 0;
}
