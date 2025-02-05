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
    Kart* kart = new Bike("Peach");
    kart->displayStats();
    kart->specialMove();

    delete kart;

    return 0;
}
