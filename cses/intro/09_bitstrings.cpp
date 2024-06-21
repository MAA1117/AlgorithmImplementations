// https://cses.fi/problemset/task/1617

#include <bits/stdc++.h>
using namespace std;

const int MOD = (int)1e9 + 7;

int main() {
  int n;
  cin >> n;
  long long sum = 2;
  for (long long i = 1; i < n; i++) {
    sum = (2 * (sum % MOD)) % MOD;
  }
  cout << sum << endl;
}
