// https://codeforces.com/problemset/problem/1841/B

#include <bits/stdc++.h>
using namespace std;

#if 0

// editorial solution

for _ in range(int(input())):
	q = int(input())
	a = []
	cnt = 0
	for x in map(int, input().split()):
		nw_cnt = cnt + (len(a) > 0 and a[-1] > x)
		if nw_cnt == 0 or (nw_cnt == 1 and x <= a[0]):
			a.append(x)
			cnt = nw_cnt
			print('1', end="")
		else:
			print('0', end="")
	print()

#endif

void solve() {
  int q, cnt1 = 0, cnt2 = 0;
  cin >> q;
  vector<int> v, ans;
  for (int i = 0; i < q; ++i) {
    int x;
    cin >> x;
    cnt2 = cnt1;
    if (v.size()) {
      if (v.back() > x) ++cnt2;
    }
    if (cnt2 == 0 || (cnt2 == 1 && x <= v[0])) {
      v.push_back(x);
      cnt1 = cnt2;
      ans.push_back(1);
    } else {
      ans.push_back(0);
    }
  }
  for (auto nx : ans) {
    cout << nx;
  }
  cout << '\n';
}

int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr);

  int test_cases;
  cin >> test_cases;
  while (test_cases--) {
    solve();
  }
}
