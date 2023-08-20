#include <exception>
#include <functional>
#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int n;
    priority_queue<int, vector<int>, greater<int>> pq;
    while (cin >> n) {
        try {
            pq.push(n);
        } catch (exception& e) {
            break;
        }
    }
    pq.push(5);
    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;
    return 0;
}
