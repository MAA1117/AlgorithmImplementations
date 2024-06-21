// https://codeforces.com/problemset/problem/1873/C

#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
using ll = long long;

void solve() {
  int score = 0;
  for (int i = 0; i < 10; ++i) {
    for (int j = 0; j < 10; ++j) {
      char c;
      cin >> c;
      if (c == 'X') {
        int ptsi, ptsj, pts;
        ptsi = min(abs(i - 5), abs(i - 4));
        ptsj = min(abs(j - 5), abs(j - 4));
        pts = 5 - max(ptsi, ptsj);
        score += pts;
      }
    }
  }
  cout << score << '\n';
}

int main() {
  SET_IO();

  int t = 1;
  cin >> t;
  while (t--) solve();
}
