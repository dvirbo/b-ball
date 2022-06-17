#pragma once
#include <string>
#include <iostream>
using namespace std;

namespace ariel
{
    class Team
    {
    public:
        string _name;
        double _talent;
        Team();
        Team(string name, double talent);
        ~Team();
    };


}