#include <bits/stdc++.h>
using namespace std;
#define SET_IO()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(nullptr);
typedef long long ll;

vector<ll> find_divisors(ll n) {
  vector<ll> divisors;
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      divisors.push_back(i);
      divisors.push_back(n / i);
    }
  }
  sort(divisors.begin(), divisors.end());
  divisors.erase(unique(divisors.begin(), divisors.end()), divisors.end());
  return divisors;
}

void solve() {
  ll a, b, l;
  cin >> a >> b >> l;
  int sm=0;
  vector<ll> divs=find_divisors(l);
  for(auto x:divs){
    if(x%a==0 || x%b==0) {
      ++sm;
    }
  }
  if(l%a==0 && l%b==0){
    ++sm;
  }
  vector<ll> divs_a=find_divisors(a);
  sm-=divs_a.size();
  vector<ll> divs_b=find_divisors(b);
  sm-=divs_b.size();
  cout << ++sm << '\n';
}

int main() {
  SET_IO();
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
