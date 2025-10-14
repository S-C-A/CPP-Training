#include <iostream>
using namespace std;

struct Node{

    int data;
    Node* next;
};

int main(){

    Node* head = new Node;
    Node* second = new Node;
    Node* third = new Node;

    head->data = 10;
    head->next = second;
    second->data = 20;
    second->next = third;
    third->data = 30;
    third->next = nullptr;

    head->next = third;
    delete second;


    Node* current = head;

    while (current != nullptr)
    {
        cout << current->data << " ";
        current = current->next;
    }
}