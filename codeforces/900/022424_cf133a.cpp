// https://codeforces.com/problemset/problem/133/A

#include <bits/stdc++.h>
using namespace std;
#define SET_IO()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(nullptr);
typedef long long ll;

int main() {
  SET_IO();
  string s;
  cin >> s;
  for (char c:s){
    if(c=='H' || c=='Q' || c=='9') {
      puts("YES");
      return 0;
    }
  }
  puts("NO");
}
