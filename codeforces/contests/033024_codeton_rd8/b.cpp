// solved post-contest with tutorial
#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
using ll = long long;

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int &nx : a) {
    cin >> nx;
  }

  vector<int> p(n), has(n + 1);
  int mex = 0;
  for (int i = 0; i < n; ++i) {
    if (a[i] > 0)
      p[i] = mex;
    else
      p[i] = mex - a[i];

    has[p[i]] = true;
    while (has[mex]) ++mex;
  }

  for (int nx : p) {
    cout << nx << " ";
  }
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
