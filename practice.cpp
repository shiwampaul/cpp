#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};
int main() {
    
    Node* n1= new Node;
    Node* n2 = new Node;
    Node* n3 = new Node;
    Node* n4 = new Node;
    Node* n5 = new Node;

    n1->data = 10;
    n2->data = 209;
    n3->data = 399;
    n4->data = 34;
    n5->data = 54;

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = NULL;
    
    Node* head = n1;
    //Node* temp = head;
    //delete n1;
    //cout << n1->data<<endl;

    while (head->next != nullptr){
        cout << head->data<< " ";
        head = head->next;
    }

    //delete head;
    cout<<endl;
    cout << n5->data;

    return 0;
}