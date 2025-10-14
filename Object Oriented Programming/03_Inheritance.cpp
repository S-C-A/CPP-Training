#include <iostream>
using namespace std;

class bomb{
public:
    void explode(){
        cout << "I don't vibe with this universe.\n"
             << "*Explodes!*";
    }
};

class animal : public bomb{
private:
    string name;
public:
    void setName(string newName){
        name = newName;
    }

    string getName(){
        return name;
    }
};

int main(){

    animal giraffe;
    giraffe.setName("Micheal");
    cout << "The animal's name is: " << giraffe.getName() << endl
         << "He says: ";
    giraffe.explode();
}