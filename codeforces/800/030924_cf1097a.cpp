// https://codeforces.com/problemset/problem/1097/A

#include <bits/stdc++.h>
using namespace std;

int main() {
  string s0, s1, s2, s3, s4, s5;
  cin >> s0 >> s1 >> s2 >> s3 >> s4 >> s5;
  for (char c : s1) {
    if (s0[0] == c || s0[1] == c) {
      cout << "YES\n";
      return 0;
    }
  }
  for (char c : s2) {
    if (s0[0] == c || s0[1] == c) {
      cout << "YES\n";
      return 0;
    }
  }
  for (char c : s3) {
    if (s0[0] == c || s0[1] == c) {
      cout << "YES\n";
      return 0;
    }
  }
  for (char c : s4) {
    if (s0[0] == c || s0[1] == c) {
      cout << "YES\n";
      return 0;
    }
  }
  for (char c : s5) {
    if (s0[0] == c || s0[1] == c) {
      cout << "YES\n";
      return 0;
    }
  }
  cout << "NO\n";
}
