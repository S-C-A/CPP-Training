#include <iostream>
#include <fstream>
#include <map>
using namespace std;

class Monster
{
    int hp;
    int atk;
 
public: 
    Monster() : hp(0), atk(0){}
    Monster(int a, int b) : hp(a), atk(b){}

    int getHP() const { return hp; }
    int getATK() const { return atk; }

    void printStats() const {
        cout << "HP: " << hp << ", ATK: " << atk << endl;
    }

    virtual void Bark(){ cout << "bob";}

};

class Skeleton : public Monster{
public:
    void Bark() override{
        cout << "Nyeh heh heh!";
    } 

    Skeleton(int a, int b) : Monster(a,b) {}
};

int main(){

    map<int, Monster*> bones; 

    ifstream file("Monster.txt");
    if (!file.is_open()) cout << "File couldn't be opened.";

    int lvl, hp, atk;

    while (file >> lvl >> hp >> atk)
    {
        bones[lvl] = new Skeleton(hp, atk);
    }
    
    for (auto n : bones) {
        cout << "Level " << n.first << ": ";
        n.second->printStats();
    }

    int target = 3;
    if (bones.find(target) != bones.end())
    {
        cout << "\nLevel " << target << " skeleton stats: ";
        bones[target]->printStats();
        bones[target]->Bark();
    }
}