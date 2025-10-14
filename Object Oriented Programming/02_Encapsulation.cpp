#include <iostream>
using namespace std;

class person{
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

    person one;
    one.setName("bob");
    cout << one.getName();

}