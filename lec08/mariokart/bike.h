#include "kart.h"

class Bike : public Kart {
    public:
        Bike(const string& driver);

        void leanTurn(int angle);
        void specialMove();
};
