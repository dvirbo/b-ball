#pragma once
#include <string>
#include <iostream>
#include <vector>
#include <map>
#include <memory>

#include "Team.hpp"

namespace ariel
{

    class Leauge
    {
    private:
        vector<shared_ptr<Team>> _teams;
        static vector<string> optional_names;
        static size_t ind;

    public:
        Leauge();                               // default- create 20 teams using rand
        Leauge(vector<shared_ptr<Team>> other); // if there is 20 teams - copy it. else create more..
        ~Leauge();
        void team_generate(size_t teams);
        static string rand_name();
        vector<shared_ptr<Team>> get_teams() const;        
        

    };

} // shared_ptr<Team*>

/*
vector<Team*> myTeams;
    myTeams.push_back(new Team("Golden State Warriors", 1));
    myTeams.push_back(new Team("Boston Celtics", 0.4));
    myTeams.push_back(new Team("Brooklyn Nets", 0.5));
    myTeams.push_back(new Team("Denver Nuggets", 0.3));
    myTeams.push_back(new Team("Philadelphia 76ers", 0.4));
    myTeams.push_back(new Team("Minnesota Timberwolves", 0.5));
    myTeams.push_back(new Team("Chicago Bulls", 0.3));
    myTeams.push_back(new Team("Portland Trail Blazers", 0.2));
    myTeams.push_back(new Team("LA Clippers", 0.5));
    myTeams.push_back(new Team("Los Angeles Lakers", 1));
    myTeams.push_back(new Team("Milwaukee Bucks", 0.7));
    myTeams.push_back(new Team("Atlanta Hawks", 0.3));
    myTeams.push_back(new Team("Charlotte Hornets", 0.2));
    myTeams.push_back(new Team("Miami Heat", 0.6));
    myTeams.push_back(new Team("Phoenix Suns", 0.8));
    myTeams.push_back(new Team("Dallas Mavericks", 0.6));
    myTeams.push_back(new Team("Memphis Grizzlies", 0.5));
    myTeams.push_back(new Team("Utah Jazz", 0.3));
    myTeams.push_back(new Team("Washington Wizards", 0));
    myTeams.push_back(new Team("Oklahoma City Thunder", 0.1));
*/