#ifndef KART_H
#define KART_H
#include<string>
#include<iostream>
using namespace std;

/*
Questions to ask while brainstorming class design:
- What traits* are common to all derived classes?
- Are there traits exclusive to some derived classes?
- Are there base class behaviors which require modifications in the derived classes?
- What level of access do you need to give for each member of the base class?

*/
class Kart {
    private: 
        int m_fuel;  // Private field to manage internal fuel consumption

    public:
        Kart(const string& driver, int maxSpeed, float weight);
        void displayStats();
        void specialMove();

    protected:
        string m_driver;
        int m_maxSpeed;
        float m_weight;
        
        void useFuel(int amount);

};

#endif