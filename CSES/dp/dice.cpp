// https://cses.fi/problemset/task/1633

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MOD = 1e9 + 7;

void solve(int n) {
  if (n <= 6) {
    cout << pow(2, n - 1) << endl;
    return;
  }
  vector<int> memo(n + 1, 0);
  for (int i = 0; i < 6; i++) {
    memo[i] = pow(2, i);
  }
  for (int i = 6; i < n; i++) {
    int s = 0;
    for (int j = 1; j <= 6; j++) {
      s = (s + memo[i - j]) % MOD;
    }
    memo[i] = s;
  }
  cout << memo[n - 1] << endl;
}

int main() {
  //  freopen("input.txt", "r", stdin);
  int n;
  cin >> n;
  solve(n);
}
