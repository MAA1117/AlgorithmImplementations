// https://codeforces.com/problemset/problem/1915/B

#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
using ll = long long;

void solve() {
  string s1, s2, s3;
  cin >> s1 >> s2 >> s3;
  bool a=false, b=false, q=false;
  for (int i=0; i<3; ++i) {
    if (s1[i] == '?') q=true;
    else if (s1[i] == 'A') a=true;
    else if (s1[i] == 'B') b=true;
  }
  if (q) {
    if (!a) cout << "A\n";
    else if (!b) cout << "B\n";
    else cout << "C\n";
    return;
  }

  a=false, b=false, q=false;
  for (int i=0; i<3; ++i) {
    if (s2[i] == '?') q=true;
    else if (s2[i] == 'A') a=true;
    else if (s2[i] == 'B') b=true;
  }
  if (q) {
    if (!a) cout << "A\n";
    else if (!b) cout << "B\n";
    else cout << "C\n";
    return;
  }

  a=false, b=false, q=false;
  for (int i=0; i<3; ++i) {
    if (s3[i] == '?') q=true;
    else if (s3[i] == 'A') a=true;
    else if (s3[i] == 'B') b=true;
  }
  if (q) {
    if (!a) cout << "A\n";
    else if (!b) cout << "B\n";
    else cout << "C\n";
    return;
  }
}

int main() {
  SET_IO();
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}

