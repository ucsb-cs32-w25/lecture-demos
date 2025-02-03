#include "person.h"
using namespace std; 

class Student : public Person { 
  public: 
    Student(string name, int age, int studentId); 
    int getStudentId(); 
    void setStudentId(int id);

    string getName(); 
  
  private: 
    int studentId; 
}; 
