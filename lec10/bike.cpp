#include "kart.h"
#include "bike.h"
#include <random>

Bike::Bike(const string& driver)
        : Kart(driver, 160, 50.0) {
            // initialize the stunts pointer
            stunts = new vector<string>;
            
            // add a few stunts including wheelie, flip, jump to the vector* stunts
            // hint: remember the push_back() function for vector?
            stunts->push_back("wheelie");
            stunts->push_back("jump");
            stunts->push_back("flip");
        }

void Bike::leanTurn(int angle) {
    cout << m_driver << " leans in at an angle of " << angle << endl;
}

/**
 * gets a randomInt from 0 to n (inclusive)
 */
int getRandomInt(int n) {
    // Create a random device to seed the generator
    std::random_device rd;  

    // Use the seed to initialize the generator
    std::mt19937 gen(rd());  

    // Create a distribution to produce integers between 0 and n (inclusive)
    std::uniform_int_distribution<> dist(0, n); 

    return dist(gen);  
}

void Bike::specialMove() {
    // get a random index between 0..size-1 of your stunts vector
    int randomIndex = getRandomInt(stunts->size() - 1); 
    
    string randomStunt = stunts->at(randomIndex); 
    cout << m_driver << " performs a "<< randomStunt << "!" << endl;
    useFuel(5);  // Uses 5% fuel for the special move
}

Bike::~Bike() {
    cout << "Bike (derived class) destructor called " << endl;

    delete stunts;

    cout << "deallocated memory for vector<string>* stunts" << endl;
}
