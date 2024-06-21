// accepted
#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
using ll = long long;

void solve() {
  int n;
  cin >> n;

  for (int i = 0; i < 2 * n; ++i) {
    for (int j = 0; j < 2 * n; ++j) {
      if ((i % 4 == 0 || i % 4 == 1) && (j % 4 == 0 || j % 4 == 1)) {
        cout << '#';
      } else if ((i % 4 == 2 || i % 4 == 3) && (j % 4 == 2 || j % 4 == 3)) {
        cout << '#';
      } else {
        cout << '.';
      }
    }
    cout << '\n';
  }
}

int main() {
  SET_IO();

  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
