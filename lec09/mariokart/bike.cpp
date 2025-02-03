#include "bike.h"

Bike::Bike(const string& driver)
        : Kart(driver, 160, 50.0) {}

void Bike::specialMove() {
    cout << m_driver << " performs a Wheelie for extra speed!" << endl;
    useFuel(5);  // Uses 5% fuel for the special move
}

// Since bikes can tilt when turning, this function can allow the 
// player to lean into turns at a specific angle, affecting handling and speed.
void Bike::leanTurn(int angle) {
    cout << m_driver << " leans in at an angle of " << angle << endl;
}