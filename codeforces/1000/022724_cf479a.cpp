#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  if (a + b + c == 3) {
    cout << 3 << '\n';
    return 0;
  }
  if (a == 1 && b != 1) ++b;
  if (c == 1 && b != 1) ++b;
  if (b == 1) {
    a > c ? ++c : ++a;
  }
  cout << a * b * c << '\n';
}
