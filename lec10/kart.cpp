#include "kart.h"

Kart::Kart(const string& driver, int maxSpeed, float weight) 
    : m_driver(driver), 
      m_maxSpeed(maxSpeed), 
      m_weight(weight), 
      m_fuel(100) {}

void Kart::displayStats() {
    cout << "Driver: " << m_driver << endl;
    cout << "Max Speed: " << m_maxSpeed << " km/h" << endl;
    cout << "Weight: " << m_weight << " kg" << "\n\n";
}

void Kart::useFuel(int amount) {
    if (m_fuel >= amount) {
        m_fuel -= amount;
        cout << m_driver << " used " << amount << 
        "% fuel. Remaining fuel: " << m_fuel << "%" << "\n\n";
    } else {
        cout << m_driver << " is out of fuel!" << endl;
    }
}

// void Kart::specialMove() {
//     cout << m_driver << " has NO special move!" << endl;
// }

Kart::~Kart() {
    cout << "Kart (base class) destructor called " << endl;
}
