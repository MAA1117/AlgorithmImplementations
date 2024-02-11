// https://cses.fi/problemset/task/1754

#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int a, b;
    cin >> a >> b;
    int sum = a + b;
    if (max(a, b) > 2 * min(a, b) || sum % 3) {
      puts("NO");
    } else {
      puts("YES");
    }
  }
}
