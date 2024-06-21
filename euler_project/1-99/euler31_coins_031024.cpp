// https://projecteuler.net/problem=31

#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
using ll = long long;
using lf = double;

const int coins[] = {1, 2, 5, 10, 20, 50, 100, 200};

int main() {
  int x = 200, n = 8;
  int dp[x + 1] = {0};
  dp[0] = 1;
  for (int coin : coins) {
    for (int j = coin; j <= x; ++j) {
      int sp = j - coin;
      if (sp < 0) continue;
      dp[j] += dp[sp];
    }
  }
  cout << dp[x] << endl;
}
