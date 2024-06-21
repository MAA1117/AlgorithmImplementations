// https://codeforces.com/problemset/problem/1944/B

#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
using ll = long long;

void solve() {
  int n, k;
  cin >> n >> k;

  vector<int> l(n), r(n), cntl(n + 1, 0), cntr(n + 1, 0), al, ar;
  for (int i = 0; i < n; ++i) {
    cin >> l[i];
    ++cntl[l[i]];
  }
  for (int i = 0; i < n; ++i) {
    cin >> r[i];
    ++cntr[r[i]];
  }

  int i = 0;
  for (int it : cntl) {
    if (it > 1) {
      al.push_back(i);
      al.push_back(i);
    }
    if (al.size() == 2 * k) break;
    ++i;
  }
  i = 0;
  for (int it : cntr) {
    if (it > 1) {
      ar.push_back(i);
      ar.push_back(i);
    }
    if (ar.size() == 2 * k) break;
    ++i;
  }
  i = 0;
  for (int it : cntl) {
    if (al.size() == 2 * k) break;
    if (it == 1) {
      al.push_back(i);
      ar.push_back(i);
    }
    ++i;
  }

  for (int it : al) cout << it << " ";
  cout << '\n';
  for (int it : ar) cout << it << " ";
  cout << '\n';
}

int main() {
  SET_IO();

  int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }
}
