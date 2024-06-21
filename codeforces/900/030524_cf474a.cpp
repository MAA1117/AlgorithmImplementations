// https://codeforces.com/problemset/problem/474/A

#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
typedef long long ll;

const string keys = "qwertyuiopasdfghjkl;zxcvbnm,./";

int main() {
  SET_IO();
  char c;
  cin >> c;
  string s;
  cin >> s;
  for(size_t i=0; i<s.size(); ++i){
    int idx = keys.find(s[i]);
    if(c=='R') {
      cout << keys[idx-1];
    } else {
      cout << keys[idx+1];
    }
  }
  cout << endl;
}

