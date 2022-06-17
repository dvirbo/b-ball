#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

#include "Leauge.hpp"
#include "Game.hpp"

using namespace std;
namespace ariel
{

    class Schedule
    {
        vector<shared_ptr<Game>> _games;
        size_t _idx;
        Leauge &_Leauge;
        size_t _gleft;

    public:
        Schedule(Leauge &l);
        void next();
        shared_ptr<Game> get_current_game() const;
        vector<shared_ptr<Game>>::iterator begin();
        vector<shared_ptr<Game>>::iterator end();

        friend std::ostream &operator<<(ostream &out, const Schedule &Schedule);
        Schedule &operator=(const Schedule &other);
    };
}
