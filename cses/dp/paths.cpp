#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll MOD = 1e9 + 7;
const ll MAXN = 1000;

int main() {
  ll n;
  cin >> n;
  char grid[n][n];
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      cin >> grid[i][j];
    }
  }
  ll dp[MAXN][MAXN] = {0};
  dp[0][0] = 1;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      if (grid[i][j] == '*') {
        dp[i][j] = 0;
        continue;
      }
      if (i) {
        dp[i][j] += dp[i - 1][j];
      }
      if (j) {
        dp[i][j] += dp[i][j - 1];
      }
      dp[i][j] %= MOD;
    }
  }
  --n;
  cout << dp[n][n] << endl;
}
