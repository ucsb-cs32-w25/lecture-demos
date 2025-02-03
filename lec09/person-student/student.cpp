#include "student.h"

Student::Student(string name, int age, int id)	
          : Person(name, age), studentId(id) {}

int Student::getStudentId() { return studentId; }

void Student::setStudentId(int id) { studentId = id; }

string Student::getName() { 
    return "student " + Person::getName(); 
}