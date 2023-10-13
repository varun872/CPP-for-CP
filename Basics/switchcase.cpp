#include <iostream>
using namespace std;
int main() {
  // simple calculator
  int a, b;
  cin >> a >> b;
  char oper;
  cin >> oper;
  switch (oper) {
  case '+':
    cout << "The addition of the numbers is: " << a + b << endl;
    break;
  case '-':
    cout << "The difference of the numbers is: " << a - b << endl;
    break;
  case '*':
    cout << "The product of the numbers is: " << a * b << endl;
    break;
  case '/':
    cout << "The quotient is: " << a / b << endl;
    break;
  case '%':
    cout << "The remainder is: " << a % b << endl;
    break;
  default:
    cout << "Invalid operator!!" << endl;
    break;
  }
  return 0;
}