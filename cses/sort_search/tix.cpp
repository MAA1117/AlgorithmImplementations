// https://cses.fi/problemset/task/1091

#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
using ll = long long;

int main() {
  SET_IO();
  int n, m;
  cin >> n >> m;
  set<pair<int, int>> st;
  for (int i = 0; i < n; ++i) {
    int tix;
    cin >> tix;
    st.insert({tix, i});
  }
  for (int i = 0; i < m; ++i) {
    int mx_p;
    cin >> mx_p;
    auto it = st.lower_bound({mx_p + 1, 0});
    if (it == st.begin()) {
      cout << "-1\n";
    } else {
      --it;
      cout << (*it).first << '\n';
      st.erase(it);
    }
  }
}
