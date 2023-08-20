#include <exception>
#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    try {
        int c = a / b;
        cout << c << endl;
    } catch (exception& e) {
        cout << e.what() << endl;
    }
    return 0;
}
