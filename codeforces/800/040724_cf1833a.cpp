// https://codeforces.com/problemset/problem/1833/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  set<pair<char, char>> st;
  for (int i = 1; i < n; ++i) {
    pair<char, char> p = {s[i - 1], s[i]};
    st.insert(p);
  }
  cout << st.size() << '\n';
}

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);

  int test_cases;
  cin >> test_cases;
  while (test_cases--) {
    solve();
  }
}
