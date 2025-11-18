#pragma once  
#include <iostream>

class Player {
private:
    int hp;
    int atk;
public:
    Player() : hp(0), atk(0){}
    Player(int hp, int atk) : hp(hp) , atk(atk){}

    void printStats() const {
    std::cout << "HP: " << hp << ", ATK: " << atk << "\n";
    }

    void Bark(){ std::cout << "Hello world...\n";}
};
