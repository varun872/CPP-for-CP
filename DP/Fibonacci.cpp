#include <iostream>
#include <vector>
using namespace std;

// Memoization Method - Top Down Approach
int fib(int n, vector<int> &dp) {
  if (n < 2) {
    return n;
  }
  if (dp[n] != -1) {
    return dp[n];
  }
  return dp[n] = fib(n - 1, dp) + fib(n - 2, dp);
}

int main() {
  int n;
  cin >> n;
  vector<int> dp(n + 1, -1); // size is n+1 because we need to calculate upto n elements
  //   int res = fib(n, dp);
  //   cout << res << endl;
  
  // Tablulation Method - Bottom Up
  dp[0] = 0;
  dp[1] = 1;
  for (int i = 2; i <= n; ++i) {
    dp[i] = dp[i - 1] + dp[i - 2];
  }
  cout << dp[n] << endl;
  return 0;
}