// https://cses.fi/problemset/task/1634

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(vector<int> &vec, int s) {
  vector<int> memo(s + 1, INT_MAX);
  memo[0] = 0;
  for (int i = 1; i <= s; i++) {
    for (int coin : vec) {
      if (coin <= i && memo[i - coin] != INT_MAX) {
        memo[i] = min(memo[i], memo[i - coin] + 1);
      }
    }
  }
  memo[s] == INT_MAX ? cout << -1 : cout << memo[s];
  cout << endl;
}

int main() {
  freopen("input.txt", "r", stdin);
  int n, x;
  cin >> n >> x;
  vector<int> coins(n);
  for (int &it : coins) {
    cin >> it;
  }
  solve(coins, x);
}
