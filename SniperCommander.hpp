#pragma once

#include <iostream>
#include <vector>
#include <stdexcept>
#include "Soldier.hpp"

#define SC_HP 120
#define SC_DPA 100

class SniperCommander : public Soldier{
public:
    SniperCommander(int team):Soldier(SC_HP, SC_DPA, team, true){};
    ~SniperCommander(){};
    void attack(std::vector<std::vector<Soldier*>> &board, std::pair<int,int> source) override{
        
    }
    void specialAttack(std::vector<std::vector<Soldier*>> &board, std::pair<int,int> source) override{
        
    }
    void heal() override{
        
    }

};