// projecteuler.net/problem=46

#include <bits/stdc++.h>
using namespace std;
#define SET_IO() ios_base::sync_with_stdio(false), cin.tie(nullptr);
using ll = long long;

bool is_prime(int n) {
  if (n <= 1)
    return false;
  if (n <= 3)
    return true;
  if (n % 2 == 0 || n % 3 == 0)
    return false;
  for (int i = 5; i * i <= n; i += 6) {
    if (n % i == 0 || n % (i + 2) == 0)
      return false;
  }
  return true;
}

int bad(int n) {
  if(is_prime(n)) return false;
  for(int i=1; 2*i*i<n; ++i) {
    int sq = 2*i*i; 
    if(is_prime(n-sq)) return false;
  }
  return true;
}

int main() {
  int mx = 1E6; 
  for(int i=1; i<mx; i+=2) {
    if(bad(i)) {
      cout << i << '\n';
    }
  }
}

