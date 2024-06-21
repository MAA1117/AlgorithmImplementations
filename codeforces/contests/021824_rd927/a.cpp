// accepted
#include <bits/stdc++.h>
using namespace std;
#define SET_IO                                                                 \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(nullptr);
typedef long long ll;
typedef double lf;

void solve() {
  ll n;
  cin >> n;
  vector<char> a(n);
  for (char &c : a) {
    cin >> c;
  }
  int count = 0;
  for (int i = 1; i < n; i++) {
    if (a[i] == '@') {
      count++;
    }
    if (a[i] == '*' && a[i - 1] == '*') {
      break;
    }
  }
  cout << count << '\n';
}

int main() {
  SET_IO;
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
