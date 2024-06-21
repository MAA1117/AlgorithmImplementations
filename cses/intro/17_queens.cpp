// https://cses.fi/problemset/task/1624/

#include <bits/stdc++.h>
using namespace std;

const int N = 8;
string board[N];
int ans = 0;
bool col[N], diag1[2 * N], diag2[2 * N];

void search(int y) {
  if (y == N) {
    ++ans;
    return;
  }
  for (int x = 0; x < N; ++x) {
    if (board[y][x] == '*' || col[x] || diag1[x + y] || diag2[x - y + N - 1])
      continue;
    col[x] = diag1[x + y] = diag2[x - y + N - 1] = true;
    search(y + 1);
    col[x] = diag1[x + y] = diag2[x - y + N - 1] = false;
  }
}

int main() {
  for (int i = 0; i < N; ++i) {
    cin >> board[i];
  }
  search(0);
  cout << ans << '\n';
}
