#include <iostream>
#include <string>
#include <vector>
#include "kart.h"
#include "standardKart.h"
#include "bike.h"
#include "monsterTruck.h"
using namespace std;

void testKart(Kart* kart) {
    kart->displayStats();
    kart->specialMove();
}


// Main function
int main() {
    // step 1: create a MonsterTruck object
    MonsterTruck monsterTruck("bowser");

    // step 2: display the stats for the MonsterTruck you created
    monsterTruck.displayStats();

    // step 3: perform the special move for the MonsterTruck
    monsterTruck.specialMove();

    // step 4: create a MonsterTruck* pointer and point it to the MonsterTruck object
    // display the stats and perform special move using this MonsterTruck* pointer
    MonsterTruck* derivedPtr = &monsterTruck;

    // step 5: create a Kart* (base class pointer) and point it to the MonsterTruck object
    Kart* basePtr = &monsterTruck;

    derivedPtr->displayStats();
    derivedPtr->specialMove();

    // step 5a: display the stats using this Kart* pointer
    basePtr->displayStats();

    // step 5b: perform special move using this Kart* pointer
    basePtr->specialMove();

    // (don't do this during 1st Activity) step 6: create a vector that can hold Kart* objects 
    // add 3 different types of derived Kart objects to the vector
    Bike bike("peach");
    StandardKart sKart("mario");
    vector<Kart*> kartObjs { &monsterTruck, &bike, & sKart};

    // (don't do this during 1st Activity) step 7: iterate through the vector and call the testKart() function for each "Kart"
    for(Kart* elem: kartObjs) {
        testKart(elem);
    }

    return 0;
}
