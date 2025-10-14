#include <iostream>
using namespace std;

struct Node{

    int data;
    Node* prev;
    Node* next;

};

int main(){

    Node* head = new Node;
    Node* second = new Node;
    Node * third = new Node;

    head->data = 10;
    head->next = second;
    head->prev = nullptr;

    second->data = 20;
    second->next = third;
    second->prev = head;

    third->data = 30;
    third->next = nullptr;
    third->prev = second;

    Node* current = head;
    int k = 1;
    while (k != 9)
    {
        cout << "The current list data is: " << current->data << endl;
        
        cout << "Press 1 to go forward in the linked list.\n"
             << "Press 2 to go back in the linked list.\n"
             << "Press 9 to exit.\n";
        cin >> k;

        switch (k)
        {
        case 1:
            if (current->next == nullptr)
            {
                cout << "There is no next element!\n";
            }
            else
            {
                current = current->next;
            }
            break;
        
        case 2:
            if (current->prev == nullptr)
            {
                cout << "There is no previous element!\n";
            }
            else
            {
                current = current->prev;
            }
            break;
        
        default:
            break;
        }
  
  
    }
    


}