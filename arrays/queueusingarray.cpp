#include <bits/stdc++.h>
using namespace std;

class Queue {
	int front, rear;
	vector<int> arr;
public:
	Queue() {
		front = 0;
		rear = 0;
		arr.resize(100001);
	}

	// Enqueue (add) element 'e' at the end of the queue.
	void enqueue(int e) {
		arr[rear++] = e;
	}

	// Dequeue (retrieve) the element from the front of the queue.
	int dequeue() {
		if(front == rear) return -1;
		else return arr[front++];
	}
};

int main() {
    Queue q;
    q.enqueue(2);
    q.enqueue(13);
    q.enqueue(7);
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    return 0;
}