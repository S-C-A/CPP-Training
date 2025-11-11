#include <iostream>
using namespace std;

class Person
{
  string name;
  
  public:
  Person(string name)
  {
    this->name = name;
  }
  void display() 
  { 
    cout << name << endl; 
  }
};

int main()
{
  Person mike("Michael");
  mike.display();
  return 0;
}