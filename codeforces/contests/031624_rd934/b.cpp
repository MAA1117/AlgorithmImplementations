// solved post-contest
#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
using ll = long long;

void solve() {
  int n, k;
  cin >> n >> k;

  vector<int> l(n), r(n), cntl(n + 1, 0), cntr(n + 1, 0), ansl, ansr;
  for (int i = 0; i < n; ++i) {
    cin >> l[i];
  }
  for (int i = 0; i < n; ++i) {
    cin >> r[i];
  }
  for (int it : l) {
    ++cntl[it];
  }
  for (int it : r) {
    ++cntr[it];
  }

  for (int it = 1; it <= n; ++it) {
    if (cntl[it] == 2) {
      ansl.push_back(it);
      ansl.push_back(it);
    }
    if (ansl.size() == 2 * k) break;
  }
  for (int it = 1; it <= n; ++it) {
    if (ansl.size() == 2 * k) break;
    if (cntl[it] == 1) {
      ansl.push_back(it);
      ansr.push_back(it);
    }
  }
  for (int it = 1; it <= n; ++it) {
    if (cntr[it] == 2) {
      ansr.push_back(it);
      ansr.push_back(it);
    }
    if (ansr.size() == 2 * k) break;
  }

  for (int it : ansl) cout << it << " ";
  cout << '\n';
  for (int it : ansr) cout << it << " ";
  cout << '\n';
}

int main() {
  SET_IO();
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}

