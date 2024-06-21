// solved post-contest referencing solution from another participant (ecnerwala)
#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, k;
  cin >> n >> k;
  --k;

  vector<int> v(n);
  for (auto &a : v) {
    cin >> a;
  }
  int vk = v[k], ans = 0;

  auto check = [&]() -> void {
    int cnt = 0, cur = v[0];
    for (int i = 1; i < n; ++i) {
      cur = max(cur, v[i]);
      if (cur == vk) {
        ++cnt;
      }
      ans = max(ans, cnt);
    }
  };

  swap(v[k], v[0]);
  check();
  swap(v[k], v[0]);

  for (int i = 0; i < n; ++i) {
    if (v[i] > vk) {
      swap(v[k], v[i]);
      check();
      swap(v[k], v[i]);
      break;
    }
  }
  cout << ans << '\n';

#if 0
  // my attempt
  if (n == 2) {
    if (v[k] > v[0] || v[k] > v[1]) {
      cout << "1\n";
    } else {
      cout << "0\n";
    }
    return;
  }
  int fl = -1, nl = -1;
  for (int i = 0; i < k; ++i) {
    if (v[i] > v[k]) {
      fl = i;
      continue;
    }
    if (fl != -1) {
      if (v[i] > v[k]) {
        nl = i;
        break;
      }
    }
  }
  if (fl == -1) {
    if (k > 0) {
      ++ans;
    }
    for (int i = k + 1; i < n; ++i) {
      if (v[i] < v[k])
        ++ans;
      else
        break;
    }
    cout << max(ans, ans+k-1) << '\n';
    return;
  }
  if (nl == -1) {
    ans = max(fl, k - fl);
    cout << ans << '\n';
    return;
  }
  ans = max(fl, nl - fl);
  cout << ans << '\n';
#endif

}

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
