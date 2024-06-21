// https://cses.fi/problemset/task/1084

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n, m, k;
  cin >> n >> m >> k;
  vector<int> a(n);
  for (int &it : a) {
    cin >> it;
  }
  vector<int> b(m);
  for (int &it : b) {
    cin >> it;
  }
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  int i = 0, j = 0, pairs = 0;
  while (i < n && j < m) {
    if (abs(a[i] - b[j]) <= k) {
      pairs++;
      i++;
      j++;
    } else if (a[i] < b[j] - k) {
      i++;
    } else {
      j++;
    }
  }
  cout << pairs << endl;
}
