// https://codeforces.com/problemset/problem/1607/A

#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
using ll = long long;

int f(const string &s, char c) {
  size_t sz = s.size();
  int idx = -1;
  for (size_t i = 0; i < sz; ++i) {
    if (s[i] == c) {
      idx = i + 1;
      break;
    }
  }
  return idx;
}

void solve() {
  string abc, s;
  cin >> abc >> s;
  int sz = s.size(), sm = 0;
  for (int i = 1; i < sz; ++i) {
    int a = f(abc, s[i]);
    int b = f(abc, s[i - 1]);
    sm += abs(a - b);
  }
  cout << sm << '\n';
}

int main() {
  SET_IO();

  int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }
}
