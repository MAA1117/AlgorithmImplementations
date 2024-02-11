// https://cses.fi/problemset/task/1092

#include <bits/stdc++.h>
using namespace std;
typedef uint64_t u8;
typedef int64_t i8;
#define FREOPEN_IN std::freopen("input.txt", "r", stdin)

int main() {
  //  FREOPEN_IN;
  int n;
  cin >> n;
  if (n % 4 == 1 || n % 4 == 2) {
    puts("NO");
  } else {
    puts("YES");
  }
  int x;
  if (n % 2) {
    x = 1;
  } else {
    x = 3;
  }
  vector<int> a;
  vector<int> b;
  for (int i = 1; i <= n; i++) {
    if (i % 4 == 2 || i % 4 == x) {
      a.push_back(i);
    } else {
      b.push_back(i);
    }
  }
  cout << a.size() << '\n';
  for (int iter : a) {
    cout << iter << " ";
  }
  cout << endl;
  cout << b.size() << '\n';
  for (int iter : b) {
    cout << iter << " ";
  }
  cout << endl;
}
