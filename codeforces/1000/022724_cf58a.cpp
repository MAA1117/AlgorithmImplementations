// https://codeforces.com/problemset/problem/58/A

#include <bits/stdc++.h>
using namespace std;
#define SET_IO()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(nullptr);
typedef long long ll;

vector<char> hello = {'h', 'e', 'l', 'l', 'o'};

int main() {
  string s;
  cin >> s;
  int n = s.size();
  for (int i = 0; i < n; ++i) {
    if (s[i] == hello[0]) {
      hello.erase(hello.begin());
      if (hello.size() == 0) {
        cout << "YES\n";
        return 0;
      }
    }
  }
  cout << "NO\n";
}
