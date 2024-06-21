// accepted
#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
using ll = long long;

void solve() {
  int n;
  cin >> n;

  vector<int> v(n);
  for (int i = 0; i < n; ++i) {
    cin >> v[i];
  }
  if (n == 1) {
    cout << 1 << '\n';
    return;
  }
  sort(v.begin(), v.end());
  int cnt1 = 1, md_idx = n / 2;
  if (n % 2 == 0) --md_idx;
  int md = v[md_idx];
  for (int i = 1; i + md_idx < n; ++i) {
    if (v[md_idx + i] == md) ++cnt1;
  }
  cout << cnt1 << '\n';
}

int main() {
  SET_IO();

  int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }
}
