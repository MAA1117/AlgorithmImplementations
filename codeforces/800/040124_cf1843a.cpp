// https://codeforces.com/problemset/problem/1843/A

#include <algorithm>
#include <iostream>
#include <vector>

void solve() {
  int n;
  std::cin >> n;
  std::vector<int> a(n);
  for (int &nx : a) {
    std::cin >> nx;
  }
  std::sort(a.begin(), a.end());
  int ans = 0;
  for (int i = 0, j = n - 1; i < j; ++i) {
    ans += a[j] - a[i];
    --j;
  }
  std::cout << ans << '\n';
}

int main() {
  std::ios_base::sync_with_stdio(false), std::cin.tie(nullptr);
  int t;
  std::cin >> t;
  while (t--) {
    solve();
  }
}
