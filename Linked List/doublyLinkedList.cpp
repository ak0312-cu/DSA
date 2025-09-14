#include<bits/stdc++.h>
using namespace std;

// Structure of node
class Node{
    public:
    int value;
    Node* next;
    Node* previous;

    Node(int val){
        value = val;
        next = nullptr;
        previous = nullptr;

    }

    Node(int val, Node* nxt, Node* prev){
        value = val;
        next = nxt;
        previous = prev;
    }
};

// Insert 


int main(){

}