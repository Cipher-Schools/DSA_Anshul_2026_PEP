#include <iostream>
using namespace std;

class Stack {
    struct Node {
        int data;
        Node* next;
        Node(int x) {
            data = x;
            next = NULL;
        }
    };

    Node* top;

public:
    Stack() {
        top = NULL;
    }

    void push(int x) {
        Node* temp = new Node(x);
        temp->next = top;
        top = temp;
    }

    void pop() {
        if(top == NULL) {
            cout << "Underflow\n";
            return;
        }
        Node* temp = top;
        top = top->next;
        delete temp;
    }

    int peek() {
        if(top == NULL) return -1;
        return top->data;
    }

    bool empty() {
        return top == NULL;
    }
};
