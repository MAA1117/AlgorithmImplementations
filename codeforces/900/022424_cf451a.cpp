// https://codeforces.com/problemset/problem/451/A

#include <bits/stdc++.h>
using namespace std;
#define SET_IO()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(nullptr);
typedef long long ll;

int main() {
  int n, m;
  cin >> n >> m;
  if (min(n, m) & 1)
    puts("Akshat");
  else
    puts("Malvika");
}
