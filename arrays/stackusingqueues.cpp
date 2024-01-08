#include <bits/stdc++.h>
using namespace std;

class Stack {
    queue<int> q1, q2;

    public:
    Stack() {

    }

    void push(int ele) {
        q2.push(ele);
        while(!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }
        swap(q1, q2);
    }

    int pop() {
        int temp = q1.front();
        q1.pop();
        return temp;
    }
};

int main() {
    Stack st;
    st.push(2);
    st.push(3);
    cout<<st.pop()<<endl;
    cout<<st.pop()<<endl;
    return 0;
}