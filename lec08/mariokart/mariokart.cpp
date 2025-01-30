#include "kart.h"
#include "standardKart.h"
#include "bike.h"
#include "monsterTruck.h"
using namespace std;

int main() {
    MonsterTruck monsterTruck("bowser");
    Bike bike("peach");
    StandardKart stdKart("mario");

    monsterTruck.displayStats();
    monsterTruck.specialMove();

    bike.displayStats();
    bike.specialMove();

    stdKart.displayStats();
    stdKart.specialMove();

    return 0;
}
