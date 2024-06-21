// https://codeforces.com/problemset/problem/1772/A

#include <bits/stdc++.h>
using namespace std;

#define REVERSE [](int a, int b) { return a > b; }
#define FREOPEN_IN std::freopen("input.txt", "r", stdin)
#define FREOPEN_OUT std::freopen("output.txt", "w", stdout)
#define SET_IO                                                                 \
  std::ios_base::sync_with_stdio(false);                                       \
  std::cin.tie(nullptr)
typedef long long ll;
typedef uint64_t u64;

void solve() {
  int n;
  cin >> n;
  vector<int> v(n);
  for (int &i : v) {
    cin >> i;
  }
  sort(v.begin(), v.end());
  v[0]++;
  int sum = 1;
  for (int i = 0; i < n; i++) {
    sum *= v[i];
  }
  cout << sum << '\n';
}

int main() {
  SET_IO;

  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
