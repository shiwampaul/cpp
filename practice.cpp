#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};
int main() {
    Node* head = nullptr;
    Node* temp = nullptr;
    for (int i=0; i<10; i++){
        Node* newdata = new Node;

        cin >> newdata->data;
        newdata->next= nullptr;
        if ( head == nullptr){
            head = newdata;
            temp = newdata;

        }
        else{
            temp->next=newdata;
            temp = newdata;
        }
    }
    temp = head;
    
    
    while (temp != nullptr){
        cout << temp->data<< " ";
        temp = temp->next;
    }

   

    return 0;
}