#include <string> 
using namespace std; 

class Person { 
  public: 
    Person(string name, int age); 
    string getName(); 
    int getAge();
    void setName(string name); 
    void setAge(int age); 
  
  private: 
    string name;
    int age; 
};
