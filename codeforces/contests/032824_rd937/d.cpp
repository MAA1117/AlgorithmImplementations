// accepted
#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
using ll = long long;

bool check(int n) {
  string s = to_string(n);
  for (auto c : s) {
    if (c == '0' || c == '1') continue;
    return false;
    break;
  }
  return true;
}

void solve() {
  int n;
  cin >> n;
  if (check(n)) {
    cout << "YES\n";
    return;
  }
  vector<int> v = {10, 11, 100, 101, 111, 1001, 1011, 1010, 1100, 1101, 1111};
  // sqrt(1e5) ~= 316.2
  // probably only need first 5 elements of v
  for (int nx : v) {
    if (nx * nx == n) {
      cout << "YES\n";
      return;
    }
    if (n % nx == 0) {
      int tmp = n / nx;
      if (nx * nx == tmp) {
        cout << "YES\n";
        return;
      }
      if (check(tmp)) {
        cout << "YES\n";
        return;
      }

      for (int nx1 : v) {
        if (tmp % nx1 == 0) {
          int tmp1 = tmp / nx1;
          if (nx * nx == tmp1) {
            cout << "YES\n";
            return;
          }
          if (check(tmp1)) {
            cout << "YES\n";
            return;
          }
        }
      }
    }
  }
  cout << "NO\n";
}

int main() {
  SET_IO();

  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
