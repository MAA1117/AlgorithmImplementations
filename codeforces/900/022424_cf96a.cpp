// https://codeforces.com/problemset/problem/96/A

#include <bits/stdc++.h>
using namespace std;
#define SET_IO()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(nullptr);
typedef long long ll;

int main() {
  SET_IO();
  string s;
  cin >> s;
  int cnt = 1;
  int h = 1;
  int n = s.size();
  for (int i = 1; i <= n; ++i) {
    if (s[i] == s[i - 1]) {
      ++cnt;
      if (cnt == 7) {
        puts("YES");
        return 0;
      }
    } else {
      cnt = 1;
    }
  }
  puts("NO");
}
