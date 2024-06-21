// https://codeforces.com/problemset/problem/1692/C

#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
using ll = long long;

void solve() {
  char grid[8][8];
  for (int i = 0; i < 8; ++i) {
    for (int j = 0; j < 8; ++j) {
      cin >> grid[i][j];
    }
  }
  for (int i = 1; i < 7; ++i) {
    for (int j = 1; j < 7; ++j) {
      if (grid[i][j] == '#') {
        if (grid[i + 1][j + 1] == '#' && grid[i + 1][j - 1] == '#') {
          cout << ++i << " " << ++j << '\n';
          return;
        }
      }
    }
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
