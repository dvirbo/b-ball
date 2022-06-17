#pragma once
#include <string>
#include <iostream>
#include "Team.hpp"

using namespace std;

namespace ariel
{
    class Game
    {
    private:
        Team& _home;
        Team& _away;
        int home_score;
        int away_score;

    public:
        Game(Team& home, Team& away);
        Team& winner(int home, int away);
        ~Game();
    };

} // namespace ariel