#include "Game.hpp"

namespace ariel
{
    Game::Game(Team& home, Team& away) : _home(home), _away(away) {}

    Game::~Game() {}

    Team& Game::winner(int home, int away)
    {
        int win  = 0;
        if (home == away)
        {
            if (_home._talent > _away._talent)
            {
                win = 1;
            }
        }
      else if (home < away)
        {
            win = 1;
        }
        
        if(win == 0){
            return _home;
        }
        return _away;
    }

} // namespace ariel
