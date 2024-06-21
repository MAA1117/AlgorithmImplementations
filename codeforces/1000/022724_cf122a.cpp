// https://codeforces.com/problemset/problem/122/A

#include <bits/stdc++.h>
using namespace std;
#define SET_IO()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(nullptr);
typedef long long ll;

vector<int> L = {4, 7, 44, 77, 47, 74, 444, 777, 447, 774, 474, 747, 477, 744};

int main() {
  int n;
  cin >> n;
  for (int x : L) {
    if (n % x == 0) {
      cout << "YES\n";
      return 0;
    }
  }
  cout << "NO\n";
}
