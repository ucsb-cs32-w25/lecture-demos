#include "kart.h"
using namespace std;

class MonsterTruck : public Kart {
    public:
        MonsterTruck(const string& driver);

        void specialMove() override;
};