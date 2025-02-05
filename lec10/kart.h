#ifndef KART_H
#define KART_H
#include<string>
#include<iostream>
using namespace std;

class Kart {
    private: 
        int m_fuel;  // Private field to manage internal fuel consumption

    public:
        Kart(const string& driver, int maxSpeed, float weight);
        void displayStats();
        virtual void specialMove() = 0;

        virtual ~Kart();

    protected:
        string m_driver;
        int m_maxSpeed;
        float m_weight;
        
        void useFuel(int amount);

};

#endif