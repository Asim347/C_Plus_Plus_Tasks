#include <iostream>
using namespace std;
#define size 10

//// Understand Initialization List 
//class Element {
//    public:
//    int v1, v2;
//    // No confusion, of class data member and local parameter i.e. data_member(local_arg)
//    Element(int v1, int v2): v2(v2), v1(v1) {
//            cout << "Element constructed!: " <<v1<< " " << v2<< endl; 
//    }    
//};
//
//int main(void) 
//{
//    Element e(50, 70);
//    cout<<e.v1<<endl;
//    cout<<e.v2<<endl;
//    return 0;
//}


// Understand Initialization List Order and thus Dependency
class Element {
    public:
    int v1, v2;
    //Element(int v1, int v2): v1(v2 + 1), v2(v2) { // Invalid, as v2 not created yet, so v1 = v2 + 1 
    Element(int v1, int v2): v2(v1 + 1), v1(v1) {   // Valid, as v1 created first, so v2 = v1 + 1
        cout << "Element constructed!: " <<v1<< " " << v2<< endl; 
    }    
};

int main(void) 
{
    Element e(50, 70);
    cout<<e.v1<<endl;
    cout<<e.v2<<endl;
    return 0;
}
