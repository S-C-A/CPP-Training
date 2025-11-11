#include <iostream>
using namespace std;

class candy {
protected:
    int sweetness;
public:
    void setSweet(int sugar){
        sweetness = sugar;
    }

    virtual void eat(){
        if (sweetness > 10)
            cout << "The candy was so sweet that it put you in a sugar coma!";
        else if (sweetness > 5)
            cout << "The candy was very sweet.";
        else
            cout << "The candy was kinda bland...";
    }
};

class fruityCandy : public candy {
protected:
    string fruit;
public:
    void setFruit(string flavor){
        fruit = flavor;
    }

    void eat() override {
        candy::eat(); 
        cout << " It tasted like " << fruit << "." << endl; 
    }
};

int main() {
    fruityCandy gummi;
    int n;
    string flavor;

    cout << "How sweet is the candy (1-10): ";
    cin >> n;
    gummi.setSweet(n);

    cout << "What flavor is the candy? ";
    cin >> flavor;
    gummi.setFruit(flavor);

    gummi.eat();  
}
