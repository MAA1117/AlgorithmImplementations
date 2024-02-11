// https://cses.fi/problemset/task/1069

#include <bits/stdc++.h>
using namespace std;

typedef uint64_t u8;
typedef int64_t i8;
#define FREOPEN_IN std::freopen("input.txt", "r", stdin)

int main() {
  FREOPEN_IN;

  string s;
  cin >> s;
  u8 count = 1;
  u8 max_count = 1;
  char prev = s[0];
  s.erase(s.begin());
  for (char c : s) {
    if (c == prev) {
      count++;
      max_count = max(count, max_count);
    } else {
      count = 1;
    }
    prev = c;
  }
  cout << max_count << endl;
}
