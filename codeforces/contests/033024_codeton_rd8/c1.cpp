// incorrect
#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
using ll = long long;

void solve() {
  int n, x, y;         // n => # sides
  cin >> n >> x >> y;  // y = 0

  vector<int> v(x);
  for (int i = 0; i < x; ++i) {
    cin >> v[i];
  }
  if(x==n) {
    cout << n-2 << '\n';
    return;
  }
  sort(v.begin(), v.end());
  int ans = min(x, n-2);

  // decrease ans by # of isolated continuous subarrays
  for (int i = 1; i <= x; ++i) {
    if(abs(v[(i+1)%x]%n - v[i%x]%n) == 1) {

//      cout << endl;
//      cout << "i: " << i << endl;
//      cout << "x: " << x << endl;
//      cout << "***" << endl;
//      cout << "(i-1)%x: " << (i-1)%x << endl;
//      cout << "i%x: " << i%x << endl;
//      cout << "(i+1)%x: " << (i+1)%x << endl;
//      cout << endl;
//      cout << "v[(i-1)%x]: " << v[(i-1)%x] << endl;
//      cout << "v[i%x]: " << v[i%x] << endl;
//      cout << "v[(i+1)%x]: " << v[(i+1)%x] << endl;
//      cout << endl;

      if(abs(v[i%x]%n - v[(i-1)%x])%n != 1 && abs(v[(i+2)%x]%n - v[(i+1)%x])%n != 1) {
        if(x==2){
          ans=0;
          break;
        }
        --ans;
      }
    }  
  }
  cout << ans << '\n';
}

int main() {
  SET_IO();

  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
