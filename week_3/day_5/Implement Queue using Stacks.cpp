#include <iostream>
#include <stack>
using namespace std;

class MyQueue {
private:
    stack<int> s1, s2;

public:
    // Push element x to the back of queue
    void push(int x) {
        s1.push(x);
    }

    // Removes the element from in front of queue and returns it
    int pop() {
        if (empty()) {
            cout << "Queue is empty\n";
            return -1;
        }

        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }

        int front = s2.top();
        s2.pop();
        return front;
    }

    // Get the front element
    int peek() {
        if (empty()) {
            cout << "Queue is empty\n";
            return -1;
        }

        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }

        return s2.top();
    }

    // Returns whether the queue is empty
    bool empty() {
        return s1.empty() && s2.empty();
    }
};
