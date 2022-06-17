#include "Leauge.hpp"
#include <random>

namespace ariel
{

     std::string Leauge::rand_name(){
        if(optional_names.empty()){
            ind = 0;
            optional_names = {"A", "B" ,"C","","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T"};
        }

        string ans  = optional_names.at(ind);
        ++ind;
        return ans;
    }

    void Leauge::team_generate(size_t teams)
    {
        double r;
        for (size_t i = 0; i < teams; i++)
        {
            shared_ptr<Team> t = make_shared<Team>();
            t->_name = rand_name(); // need to generate..
            t->_talent = ((double)rand() / (RAND_MAX));
            _teams.push_back(t);
        }
    }

    Leauge::Leauge()
    {
        team_generate(0);
    }

    Leauge::Leauge(vector<shared_ptr<Team>> other)
    {
        size_t left = 20 - other.size();

        if (left == 0)
        { // use 'build in' Vector assignment operator
            this->_teams = other;
        }
        else
        {
            team_generate(left);
        }
    }

    vector<shared_ptr<Team>> Leauge::get_teams() const{
        return this->_teams;
    }




}