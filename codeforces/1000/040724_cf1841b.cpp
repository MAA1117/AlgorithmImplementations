// https://codeforces.com/problemset/problem/1841/B

#include <bits/stdc++.h>
using namespace std;

// solution can be simplified significantly
// runtime: 1952 ms 
// TL: 2000 ms

void solve() {
  int q;
  cin >> q;
  vector<int> v(q), ans;
  for (int i = 0; i < q; ++i) {
    cin >> v[i];
  }

  ans.push_back(1);
  int cnt_dec = 0, first = v[0];
  for (int i = 1; i < q; ++i) {
    if (v[i] > first && cnt_dec) {
      ans.push_back(0);
      v.erase(v.begin() + i);
      --q, --i;
    } else if (v[i] < v[i - 1] && v[i] > first) {
      ans.push_back(0);
      v.erase(v.begin() + i);
      --q, --i;
    } else if (v[i] < v[i - 1] && cnt_dec) {
      ans.push_back(0);
      v.erase(v.begin() + i);
      --q, --i;
    } else if (v[i] < v[i - 1]) {
      ++cnt_dec;
      ans.push_back(1);
    } else {
      ans.push_back(1);
    }
  }
  for (int nx : ans) {
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
