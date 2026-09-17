#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    Node(int value){
        data = value;
        next=NULL;
    }
};
class list{
    Node* head;
    Node* tail;

    public:
    list(){
        head = tail = NULL;
    }
    void push_front(int x){
        Node* newNode = new Node(x);
        if (head == NULL){
            head = tail = newNode;
            return;
        }else{
            newNode->next=head;
            head = newNode;
        }
    }
    void push_back(int x){
        Node* newNode = new Node(x);

        if (head == NULL){
            head = tail = newNode;
            return; 
        }
        else{
            tail->next=newNode;
            tail=tail->next;
        }
    }
    
    void pop_front(){
        if (head == NULL){
            cout << "Linked list is empty, we cannot pop an element"<< endl;
            return;
        }else{
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }
    void pop_back(){
        if (tail == NULL){
            cout << "Linked list is empty, we cannot pop an element."<< endl;
        }else{
            Node* temp = head;
            while(temp->next != tail){
                temp = temp->next;
            }
            tail=temp;
            temp->next = NULL;
            delete temp->next;
        }

    }// insert an element at given location
    void insert(int element, int pos){
        Node* newNode = new Node(element);
        Node* temp = head;
        if (temp == NULL){
            cout << "Linked list is empty"<< endl;
            return;
        }else{
            int count = 1;
            while (count != pos-1){
                count++;
                temp = temp->next;
            }
            newNode->next = temp->next;
            temp->next = newNode;
            
        }
    }
    // pop an element at nth position from linked list
    void delete_nth_element(int n){
        Node* temp = head;
        for (int i=1; i<n-1; i++){
            temp = temp->next;
        }
        
        temp->next = temp->next->next;
    }
    void print_linked_list(){
        Node* temp = head;
        while (temp != NULL){
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
    // A very beautiful approach to find the middle element of linked list
    void middle(){
        Node* slow = head;
        Node* fast = head;
        int count = 0;
        while (fast != NULL && fast->next != NULL){
            fast = fast->next->next;
            slow = slow->next;
            count++;
        }
        cout << "Middle element is: "<< slow->data << " at position: " << count<< endl;
    }
    // a very beautiful approach to reverse a linked list using 3 pointers
    void reverse(){
        Node* pre = NULL;
        Node* cur = head;
        Node* nex = NULL;
        while (cur != NULL){
            nex = cur->next;
            cur->next = pre;
            pre = cur;
            cur = nex;
        }
        head = pre;
    }
    // finding an element exist or not in a linked list
    void search(int x){
        Node* temp = head;
        while (temp->data != x || temp->next != NULL){
            if (temp->data==x){
                cout << "Element " << x << " found."<< endl;
                return;
            }
            temp = temp->next;
        }
        cout << "Element does not exist in this linked list.";
    }
};

int main() {
    list l;
    l.push_front(10);
    l.push_front(20);
    l.push_front(30);
    l.print_linked_list();
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);
    l.print_linked_list();
    l.pop_front();
    l.print_linked_list();
    l.pop_back();
    l.print_linked_list();
    l.insert(0,3);
    l.push_back(30);
    l.push_back(30);
    l.print_linked_list();
    l.push_back(20);
    l.delete_nth_element(5);
    l.print_linked_list();
    l.middle();
    l.reverse();
    l.print_linked_list();
    l.search(10);

      
    return 0;
}