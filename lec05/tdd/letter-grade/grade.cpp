#include "grade.h"
#include<iostream>

std::string getLetterGrade(int score) {
    if(score < 0 || score > 100) {
        return "error";
    }
    
    if (score >= 90) {
        return "A";
    } else if (score >= 80) {
        return "B";
    } else if (score >= 70) {
        return "C";
    } else if (score >= 60) {
        return "D";
    }
    return "F";
}

