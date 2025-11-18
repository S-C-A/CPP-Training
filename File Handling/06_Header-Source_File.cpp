#include <iostream>
#include "Player.h" 

int main() {

    Player p1;
    p1.printStats();  
    p1.Bark();     

    Player p2(100, 50);
    p2.printStats(); 
    p2.Bark();      

    return 0;
}
