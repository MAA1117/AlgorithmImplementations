// https://codeforces.com/problemset/problem/118/A

#include <bits/stdc++.h>
using namespace std;
#define SET_IO()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(nullptr);
typedef long long ll;

bool is_vowel(char c) {
  if (c == 'a') return true;
  if (c == 'e') return true;
  if (c == 'i') return true;
  if (c == 'o') return true;
  if (c == 'u') return true;
  if (c == 'y') return true;
  return false;
}

int main() {
  SET_IO();
  string s;
  cin >> s;
  int sz = s.size();
  for (int i = 0; i < sz; ++i) {
    if (s[i] < 'a') {
      s[i] += 32;
    }
  }
  for (int i = 0; i < sz; ++i) {
    if (is_vowel(s[i])) {
      s.erase(s.begin() + i);
      --sz;
      --i;
    }
  }
  vector<char> ans;
  for (char c : s) {
    ans.push_back('.');
    ans.push_back(c);
  }
  for (char c : ans) cout << c;
  cout << '\n';
}
