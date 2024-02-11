// https://cses.fi/problemset/task/2205

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void print_gray(ll n) {
  vector<string> a;
  a.push_back("0");
  a.push_back("1");
  ll i, j;
  for (i = 2; i < (1 << n); i = i << 1) {
    for (j = i - 1; j >= 0; j--) {
      a.push_back(a[j]);
    }
    for (j = 0; j < i; j++) {
      a[j] = "0" + a[j];
    }
    for (j = i; j < 2 * i; j++) {
      a[j] = "1" + a[j];
    }
  }
  for (auto iter : a) {
    cout << iter << '\n';
  }
}

int main() {
  ll n;
  cin >> n;
  print_gray(n);
}
