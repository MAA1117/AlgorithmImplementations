// https://codeforces.com/problemset/problem/1385/B

#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
using ll = long long;

void solve() {

  int n;
  cin >> n;

  set<int> st;
  vector<int> ans;
  for (int i = 0; i < 2*n; ++i) {
    int x;
    cin >> x;
    if(st.find(x)==st.end()){
      st.insert(x);
      ans.push_back(x);
    }
  }
  for(int x : ans) {
    cout << x << " ";
  }
  cout << '\n';

}

int main() {
  SET_IO();

  int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }

}
