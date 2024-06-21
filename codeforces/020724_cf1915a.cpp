// Problem: https://codeforces.com/problemset/problem/1915/A

#include <bits/stdc++.h>
using namespace std;

typedef uint64_t U8;
typedef int64_t I8;
#define REVERSE [](int a, int b) { return a > b; }
#define FREOPEN_IN std::freopen("input.txt", "r", stdin)
#define FREOPEN_OUT std::freopen("output.txt", "w", stdout)
#define SET_IO                                                                 \
  std::ios_base::sync_with_stdio(false);                                       \
  std::cin.tie(nullptr)

void solve() {
  int a, b, c;
  cin >> a >> b >> c;
  if (a == b) {
    cout << c << '\n';
  }
  if (c == b) {
    cout << a << '\n';
  }
  if (a == c) {
    cout << b << '\n';
  }
}

int main() {
  SET_IO;

  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
