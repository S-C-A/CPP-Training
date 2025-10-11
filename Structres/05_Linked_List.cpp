#include <iostream>
using namespace std;


struct Node {
    int data;     
    Node* next;   
};

int main() {

    Node* first = new Node;   
    Node* second = new Node;  

    first->data = 10;         
    first->next = second;     

    second->data = 20;        
    second->next = nullptr;  

    Node* current = first;   
    while (current != nullptr) {
        cout << current->data << " "; 
        current = current->next;      
    }
    cout << endl;

    delete first;
    delete second;

    return 0;
}
