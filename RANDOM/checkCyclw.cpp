#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

void checkCycle(Node* head) {
    if (head == nullptr || head->next == head) {
        cout << "Cycle does not exist." << endl;
        return;
    }

    Node* slow = head;
    Node* fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            cout << "Cycle exists." << endl;
            return;
        }
    }
    
    cout << "Cycle does not exist." << endl;
}


int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = head->next;

    checkCycle(head);

    return 0;
}
