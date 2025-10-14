#include <iostream>
using namespace std;

struct Node{

    int data;
    Node* next;
};

int main(){

    Node* head = new Node;
    Node* third = new Node;

    head->data = 10;
    head->next = third;
    third->data = 30;
    third->next = nullptr;

    Node* second = new Node;
    second->data = 20;
    second->next = head->next;
    head->next = second;

    Node* current = head;

    while (current != nullptr)
    {
        cout << current->data << " ";
        current = current->next;
    }
}