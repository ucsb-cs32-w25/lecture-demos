#include "person.h"

Person::Person(string name, int age) { 
	this->name = name; 
	this->age = age; 
} 

string Person::getName() { return name; } 

int Person::getAge() { return age; } 

void Person::setName(string name) { this->name = name; } 

void Person::setAge(int age) { this->age = age; }

