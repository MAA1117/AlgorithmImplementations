// https://codeforces.com/problemset/problem/208/A

#include <bits/stdc++.h>
using namespace std;
#define SET_IO()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(nullptr);
typedef long long ll;

// trim from left
inline std::string& ltrim(std::string& s, const char* t = " \t\n\r\f\v") {
  s.erase(0, s.find_first_not_of(t));
  return s;
}

// trim from right
inline std::string& rtrim(std::string& s, const char* t = " \t\n\r\f\v") {
  s.erase(s.find_last_not_of(t) + 1);
  return s;
}

// trim from left & right
inline std::string& trim(std::string& s, const char* t = " \t\n\r\f\v") {
  return ltrim(rtrim(s, t), t);
}

int main() {
  SET_IO();
  string s;
  cin >> s;
  int n = s.size();
  for (int i = 2; i < n; ++i) {
    if (s[i] == 'B' && s[i - 1] == 'U' && s[i - 2] == 'W') {
      s[i] = ' ';
      s.erase(s.begin() + (i - 2), s.begin() + (i));
      i -= 2;
      n -= 2;
    }
  }

  trim(s); // strips leading and trailing whitespace

  char prev = 'a';
  for (char c : s) {
    if (c == ' ' && prev == ' ') continue;
    cout << c;
    prev = c;
  }
}
