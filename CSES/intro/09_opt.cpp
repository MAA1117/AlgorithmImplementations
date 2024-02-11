#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MOD = (int)1e9 + 7;

int main() {
  int n;
  cin >> n;
  ll sum = 1;
  for (ll i = 0; i < n; i++) {
    sum = 2 * sum % MOD;
  }
  cout << sum << endl;
}
