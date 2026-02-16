#include <iostream>
using namespace std;

class Stack {
    int arr[100];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(int x) {
        if(top == 99) {
            cout << "Overflow\n";
            return;
        }
        arr[++top] = x;
    }

    void pop() {
        if(top == -1) {
            cout << "Underflow\n";
            return;
        }
        top--;
    }

    int peek() {
        if(top == -1) return -1;
        return arr[top];
    }

    bool empty() {
        return top == -1;
    }
};
