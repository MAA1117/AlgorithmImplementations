// https://codeforces.com/problemset/problem/1722/B

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  // "cant distinguish G and B"
  string s1, s2;
  cin >> s1 >> s2;
  for (int i = 0; i < n; i++) {
    if (s1[i] == 'G') {
      s1[i] = 'B';
    }
    if (s2[i] == 'G') {
      s2[i] = 'B';
    }
    if (s1[i] != s2[i]) {
      puts("NO");
      return;
    }
  }
  puts("YES");
}

int main() {
  //  freopen("input.txt", "r", stdin);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
