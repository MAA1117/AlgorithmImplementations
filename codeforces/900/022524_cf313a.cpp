// https://codeforces.com/problemset/problem/313/A

#include <bits/stdc++.h>
using namespace std;
#define SET_IO()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(nullptr);
typedef long long ll;

int main() {
  string s;
  cin >> s;
  if (s[0] != '-') {
    cout << stoi(s) << '\n';
    return 0;
  }
  int sz = s.size() - 1;
  s[sz] > s[sz - 1] ? s.erase(s.begin() + sz) : s.erase(s.begin() + sz - 1);
  cout << stoi(s) << '\n';
}
