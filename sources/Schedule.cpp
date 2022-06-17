#include "Schedule.hpp"
namespace ariel
{

    Schedule::Schedule(Leauge &l) : _Leauge(l), _gleft(0), _idx(0)
    {

        vector<shared_ptr<Team>> tmp = _Leauge.get_teams();

        for (size_t i = 0; i < tmp.size(); ++i)
        {
            for (size_t j = 0; j < tmp.size(); ++j)
            {
                if (i != j)
                {
                    shared_ptr<Game> game = make_shared<Game>(tmp.at(i), tmp.at(j));
                    this->_games.push_back(game);
                }
            }
        }

        auto rng = std::default_random_engine{};
        shuffle(this->_games.begin(), this->_games.end(), rng);

        _gleft = _games.size();
    }

    shared_ptr<Game> Schedule::get_current_game() const
    {
        return this->_games.at(_idx);
    }

    void Schedule::next()
    {
        if (_idx < _games.size())
        {
            _idx++;
            _gleft--;
        }
        else
        {
            throw runtime_error("no more games");
        }
    }


    vector<shared_ptr<Game>>::iterator Schedule::begin() { return this->_games.begin(); }

    vector<shared_ptr<Game>>::iterator Schedule::end() { return this->_games.end(); }
} // namespace ariel
