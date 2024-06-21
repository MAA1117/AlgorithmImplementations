// accepted
#include <bits/stdc++.h>
using namespace std;
#define SET_IO                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(nullptr);
typedef long long ll;

ll const MAX = LLONG_MAX / 2 - 1;

void solve() {
  ll n;
  cin >> n;
  ll skill1 = MAX;
  ll skill2 = MAX;
  ll skill = MAX;
  for (int i = 0; i < n; i++) {
    ll m;
    cin >> m;
    char s[2];
    cin >> s[0] >> s[1];
    if (s[0] == '1' && s[1] == '1') {
      skill = min(m, skill);
      continue;
    }
    if (s[0] == '1') {
      skill1 = min(m, skill1);
    }
    if (s[1] == '1') {
      skill2 = min(m, skill2);
    }
  }
  if (skill != MAX || (skill1 != MAX && skill2 != MAX)) {
    cout << min(skill1 + skill2, skill) << '\n';
  } else {
    cout << -1 << '\n';
  }
}

int main() {
  SET_IO;
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
