#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, m; cin >> n >> m;
  vector<string> V(n);
  for (auto &s : V) cin >> s;
  bool v = false, i = false, k = false, a = false;

  for (int it = 0; it < m; ++it) {
    for (int j = 0; j < n; ++j) {
      if (!v) {
        if (V[j][it] == 'v') {
          v = true;
          break;
        }
      } else if (!i) {
        if (V[j][it] == 'i') {
          i = true;
          break;
        }
      } else if (!k) {
        if (V[j][it] == 'k') {
          k = true;
          break;
        }
      } else {
        if (V[j][it] == 'a') {
          a = true;
          break;
        }
      }
    }
  }
  if (v && i && k && a) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
}

int main() {
  ios_base::sync_with_stdio(0), cin.tie(nullptr);

  int test_cases;
  cin >> test_cases;
  while (test_cases--) {
    solve();
  }
}
