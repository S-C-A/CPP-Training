#include <iostream>
using namespace std;

struct Grade
{
    int math;
    int science;
    int english;
};

void Speak(Grade value){

    cout << "Your math result is: " << value.math << endl;
    value.math = 30;
    cout << "Just kidding its: " << value.math << " lmao\n";
}

void Change(Grade& refer){

    cout << "Your math result is: " << refer.english << endl;
    refer.english = 20;
    cout << "Just kidding its: " << refer.english << " lmao\n";

}

void Ponder(Grade* point){

    cout << "Your math result is: " << point->science << endl;
    point->science = 10;
    cout << "Just kidding its: " << point->science << " lmao\n";

}

int main(){

    Grade Bob = {90,75,80};

    Speak(Bob);
    Change(Bob);
    Ponder(&Bob);

    cout << "math:" << Bob.math << endl
         << "english:" << Bob.english << endl
         << "science:" << Bob.science << endl;
}
