// https://cses.fi/problemset/task/2165
// Tower of Hanoi game

#include <bits/stdc++.h>
using namespace std;

void h(int n, int start, int end) {
  if (n == 1) {
    cout << start << " " << end << '\n';
    return;
  } else {
    int other = 6 - (start + end);
    h(n - 1, start, other);
    cout << start << " " << end << '\n';
    h(n - 1, other, end);
  }
}

int main() {
  int n;
  cin >> n;
  cout << pow(2, n) - 1 << '\n';
  h(n, 1, 3);
}
