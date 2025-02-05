#include "kart.h"
#include<vector>
#include<string>
class Bike : public Kart {
    public:
        Bike(const string& driver);

        void leanTurn(int angle);
        void specialMove() override;

        ~Bike();

    private:
        vector<string>* stunts;
};
