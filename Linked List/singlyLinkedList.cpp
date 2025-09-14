#include<bits/stdc++.h>
using namespace std;

// Structure of node
class Node{
    public:
    int value;
    Node* next;

    Node(int val){
        value = val;
        next = nullptr;

    }

    Node(int val, Node* nxt){
        value = val;
        next = nxt;
    }
};

// Insert new node at the beginning
Node* insertNode(Node* head, int val){
    Node* temp = new Node(val, head);
    return temp;
}

// Delete last node
Node* deleteLastNode(Node* head){
    if(head == nullptr || head -> next == nullptr) return nullptr;
    
    Node* temp = head;
    while(temp -> next -> next != nullptr){
        temp = temp -> next;
    }
    delete temp -> next;
    temp -> next = nullptr;;
    return head;
}

// Display elemnts of the linked list
void display(Node* head){
    while(head != nullptr){
        cout << head -> value << endl;
        head = head -> next;
    }

}

int main(){
    Node* head = new Node(10);
    head -> next = new Node(20);
    head -> next -> next = new Node(30);
    head -> next -> next -> next = new Node(40);

    head = insertNode(head, 5);


    cout << "Before deletion" << endl;
    display(head);
    cout << endl;
    cout << "After deletion" << endl;
    head = deleteLastNode(head);
    display(head);   

}