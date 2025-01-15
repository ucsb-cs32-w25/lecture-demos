#include<iostream>
using namespace std;
class A {
   public:
      int a;
      double b;
      char c;
};

int main() {
    A aObj;
    cout << "\nSize of the object of class A is = " << sizeof(aObj) << " Bytes\n";
    cout << "&aObj = " << &aObj << endl; 
    cout << "&aObj.a = " << reinterpret_cast<void*>(&aObj.a) << endl;
    cout << "&aObj.b = " << reinterpret_cast<void*>(&aObj.b) << endl; 
    cout << "&aObj.c = " << reinterpret_cast<void*>(&aObj.c) << endl; 

    return 0;
}