#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void append(Node*& head, int value) {
    Node* newNode = new Node{value, nullptr}; 

    if (head == nullptr) {  
        head = newNode;  
        return;
    }

    Node* temp = head; 
    while (temp->next != nullptr) { 
        temp = temp->next;
    }
    temp->next = newNode;   
}

void printList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;  

    append(head, 10);
    append(head, 20);
    append(head, 30);

    cout << "Linked list: ";
    printList(head);

    Node* current = head;
    while (current != nullptr) {
        Node* nextNode = current->next;
        delete current;
        current = nextNode;
    }

    return 0;
}
