// wrong
#include <bits/stdc++.h>
using namespace std;
#define SET_IO()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(nullptr);
typedef long long ll;

vector<int> memo(22, INT_MAX);

void solve() {
  int n;
  cin >> n;
  if(n<=21){
    cout << memo[n] << endl;
    return;
  }
  int r = (n-21)%15;
  int ans=(n-21)/15+3;
  if(r==4 || r==9){
    --ans;
  }else if(r==8 || r==11 || r==13){
    ++ans;
  }
  cout<<ans<<'\n';
}

int main() {
  SET_IO();
  memo[0] = 0;
  vector<int> vec = {1, 3, 6, 10, 15};
  for (int i = 1; i <= 21; i++) {
    for (int coin : vec) {
      if (coin <= i && memo[i - coin] != INT_MAX) {
        memo[i] = min(memo[i], memo[i - coin] + 1);
      }
    }
  }
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
