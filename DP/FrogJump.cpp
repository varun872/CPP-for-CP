#include <algorithm>
#include <climits>
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <vector>
using namespace std;

// Memoization Method
int jump(int n, vector<int> &heights, vector<int> &dp) {
  if (n == 0) {
    return 0;
  }
  if (dp[n] != -1) {
    return dp[n];
  }
  int fs = jump(n - 1, heights, dp) + abs(heights[n] - heights[n - 1]);
  int ss = INT_MAX;
  if (n > 1) {
    ss = jump(n - 2, heights, dp) + abs(heights[n] - heights[n - 2]);
  }
  return dp[n] = min(fs, ss);
}

int main() {
  int n;
  cin >> n;
  vector<int> heights(n);
  for (int i = 0; i < n; ++i) {
    cin >> heights[i];
  }
  vector<int> dp(n + 1, -1);
  // int res = jump(n, heights, dp);
  // cout << res << endl;

  // Tablular method - Bottom-Up Approach
  dp[0] = 0;
  for (int i = 1; i <= n; ++i) {
    int fs = dp[i - 1] + abs(heights[i] - heights[i - 1]);
    int ss = INT_MAX;
    if (n > 1) {
      ss = dp[i - 2] + abs(heights[i] - heights[i - 2]);
    }
    dp[i] = min(fs, ss);
  }
  cout << dp[n] << endl;
  return 0;
}