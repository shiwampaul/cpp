#include <iostream>
#include <cmath>
using namespace std;
struct Node{
    int data;
    Node* next;

    Node(int value){
        this->data= value;
        this->next=NULL;
    }
};
void insert(Node** head, int value){
    Node* newNode = new Node(value);
    if (*head == NULL){
        *head = newNode;
        return;
    }

    Node* temp = *head;
    while (temp->next  != NULL){
        temp = temp->next;
    }
    temp->next= newNode;
    newNode->next=NULL;
}
int size(Node* head){
    Node* temp = head;
    int count = 0;
    while(temp != NULL){
        temp= temp->next;
        count++;
    }
    return count;
}
int getDecimal(Node* head){
    int length =  size(head);
    int count = 1, sum = 0;
    Node* temp = head;
    while (temp != NULL){
        sum += (temp->data)*pow(2, length-count);
        count++;
        temp = temp->next;
    }
    return sum;
}
void display(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
    cout << "Decimal integer is: " << getDecimal(head) << endl;
}
int main() {
    Node* head = NULL;
    insert(&head, 1);
    insert(&head, 0);
    insert(&head, 1);
    insert(&head, 0);
    insert(&head, 1);
    display(head);
      
    return 0;
} 

