#include "grade.h"
#include "tddFuncs.h"
int main() {
    assertEquals("A grade at 100", "A", getLetterGrade(100));
    assertEquals("A grade at 90", "A", getLetterGrade(90));
    
    assertEquals("B grade at 89", "B", getLetterGrade(89));
    assertEquals("B grade at 80", "B", getLetterGrade(80));

    assertEquals("C grade at 79", "C", getLetterGrade(79));
    assertEquals("C grade at 70", "C", getLetterGrade(70));

    assertEquals("score outside bounds", "error", getLetterGrade(-1));


    return 0;
}