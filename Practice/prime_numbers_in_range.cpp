#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    vector<int> res;
    for (int i = a; i < b; i++) {
        int count = 0;
        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                count++;
                break;
            }
        }
        if (count == 0) {
            res.push_back(i);
        }
    }
    for (auto x : res) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
