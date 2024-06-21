// https://cses.fi/problemset/task/1635

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MOD = 1e9 + 7;

void solve(vector<int> &vec, int s) {
  vector<int> memo(s + 1, 0);
  memo[0] = 1;
  for (int i = 1; i <= s; i++) {
    for (int coin : vec) {
      if (coin <= i) {
        memo[i] = (memo[i] + memo[i - coin]) % MOD;
      }
    }
  }
  cout << memo[s] << endl;
}

int main() {
  //  freopen("input.txt", "r", stdin);
  int n, x;
  cin >> n >> x;
  vector<int> coins(n);
  for (int &it : coins) {
    cin >> it;
  }
  solve(coins, x);
}
