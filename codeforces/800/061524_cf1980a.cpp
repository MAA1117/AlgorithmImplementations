// https://codeforces.com/problemset/problem/1980/A

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve() {
    int n, m; cin >> n >> m;
    string s; cin >> s;
    vector<int> A(7, 0);
    for (auto it : s) {
        ++A[it - 'A'];
    }
    int ans = 0;
    for (auto it : A) {
        ans += max(m-it, 0);
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0);

    int test_cases;
    cin >> test_cases;
    while (test_cases--) {
        solve();
    }
}
