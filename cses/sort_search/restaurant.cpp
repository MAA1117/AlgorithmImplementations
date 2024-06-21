// https://cses.fi/problemset/task/1619

#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
using ll = long long;

int main() {
  SET_IO();
  int n; cin>>n;
  set<pair<int,int>> st;
  for(int i=0; i<n; ++i) {
    int a, b; cin>>a>>b;
    st.insert({a,b});
  }
}

