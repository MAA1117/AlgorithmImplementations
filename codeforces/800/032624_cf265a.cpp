// https://codeforces.com/problemset/problem/265/A

#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
using ll = long long;

int main() {
  SET_IO();
  string s, instructions;
  cin >> s >> instructions;
  int sz1 = s.size(), sz2 = instructions.size(), j = 0;
  for (int i = 0; i < sz2; ++i) {
    if (instructions[i] == s[j]) ++j;
    if (j == sz1) break;
  }
  cout << ++j << '\n';
}
