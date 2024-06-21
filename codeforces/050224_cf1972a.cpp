// https://codeforces.com/problemset/problem/1972/A

#include <bits/stdc++.h>
using namespace std;

bool check(deque<int> &a, deque<int> &b, int &n) {
  for (int i=0; i<n; ++i) {
    if (a[i] > b[i]) return false;
  }
  return true;
}

void solve() {
  int n; cin >> n;
  deque<int> a(n), b(n);
  for(auto &i:a) cin >> i;
  for(auto &i:b) cin >> i;

  int ans = 0;
  do {
    if (check(a, b, n)) {
      cout << ans << endl;
      return;
    }
    a.push_front(0);
    ++ans;
  } while (1);
}

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);

  int test_cases;
  cin >> test_cases;
  while (test_cases--) {
    solve();
  }
}

