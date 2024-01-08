#include <bits/stdc++.h>
using namespace std;

class Queue {
    stack<int> s1, s2;

    public:
    Queue() {

    }

    void enqueue(int val) {
        while (!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(val);
        while (!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }
    }

    int dequeue() {
        int temp = s1.top();
        s1.pop();
        return temp;
    }
};

int main() {
    Queue q1;
    q1.enqueue(2);
    q1.enqueue(3);
    q1.enqueue(1);
    cout<<q1.dequeue()<<endl;
    cout<<q1.dequeue()<<endl;
    cout<<q1.dequeue()<<endl;
    return 0;
}