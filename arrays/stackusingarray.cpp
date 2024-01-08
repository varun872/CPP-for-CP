#include <bits/stdc++.h>
using namespace std;

class Stack {
public:
    vector<int> arr;
    int Top = -1;

    Stack(int capacity) {
        arr.resize(capacity);
    }

    void push(int num) {
        if(!isFull()) arr[++Top] = num;
    }

    int pop() {
        if(!isEmpty()) return arr[Top--];
        else return -1;
    }
    
    int top() {
        if(!isEmpty()) return arr[Top];
        else return -1;
    }
    
    int isEmpty() {
        return Top == -1 ? 1 : 0;
    }
    
    int isFull() {
        return Top == arr.size() - 1 ? 1 : 0;
    }
    
};


int main() {
    Stack st(5);
    st.push(3);
    st.push(5);
    st.push(7);
    cout<<st.top()<<endl;
    cout<<st.pop()<<endl;
    cout<<st.top()<<endl;
    cout<<st.pop()<<endl;
    return 0;
}