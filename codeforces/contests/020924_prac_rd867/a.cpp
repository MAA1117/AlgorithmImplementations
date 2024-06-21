// accepted
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int q;
  cin >> q;
  while (q--) {
    int n, t;
    cin >> n >> t;
    vector<pair<int, int>> v(n);
    for (auto &i : v) {
      cin >> i.first; // seconds
    }
    for (auto &i : v) {
      cin >> i.second; // value
    }
    int h = -1;
    int ind = -1;
    for (int i = 0; i < n; i++) {
      if (v[i].first + i <= t && v[i].second > h) {
        h = v[i].second;
        ind = i + 1;
      }
    }
    cout << ind << '\n';
  }
}
