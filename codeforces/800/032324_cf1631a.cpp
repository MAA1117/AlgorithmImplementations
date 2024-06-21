// https://codeforces.com/problemset/problem/1631/A

#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
using ll = long long;

void solve() {
  int n;
  cin >> n;

  vector<int> v1(n), v2(n);
  for (int i = 0; i < n; ++i) {
    cin >> v1[i];
  }
  for (int i = 0; i < n; ++i) {
    cin >> v2[i];
  }
  for (int i = 0; i < n; ++i) {
    if (v1[i] > v2[i]) {
      swap(v1[i], v2[i]);
    }
  }
  sort(v1.begin(), v1.end());
  sort(v2.begin(), v2.end());
  cout << v1[n - 1] * v2[n - 1] << '\n';
}

int main() {
  SET_IO();

  int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }
}
