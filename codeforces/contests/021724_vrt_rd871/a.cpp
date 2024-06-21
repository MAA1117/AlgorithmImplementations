// accepted
#include <bits/stdc++.h>
using namespace std;
#define SET_IO                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(nullptr);
typedef long long ll;
typedef double lf;

const char a[11] = "codeforces";

void solve() {
  ll n;
  int cnt = 0;
  for (int i = 0; i < 10; i++) {
    char c;
    cin >> c;
    if (c != a[i]) {
      cnt++;
    }
  }
  cout << cnt << '\n';
}

int main() {
  SET_IO;
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
