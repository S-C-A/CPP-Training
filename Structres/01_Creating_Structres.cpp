#include <iostream>
using namespace std;


struct car
{
    string name;
    string brand;
    int age;

    void honk();
};

void car::honk(){

    cout << "Honk honk";
}

int main(){

    car red;

    red.age = 10;
    red.brand = "rat";
    red.name = "bober";

    cout << red.name << " is a " << red.brand << " brand, " << red.age << " years old car." << endl;
    red.honk();
}
