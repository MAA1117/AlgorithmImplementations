// https://codeforces.com/problemset/problem/1772/A

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
typedef long long ll;

void solve() {
  string expr;
  cin >> expr;
  int a = expr[0] - '0';
  int b = expr[2] - '0';
  cout << a + b << '\n';
}

int main() {
  SET_IO;

  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
