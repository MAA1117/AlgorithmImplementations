// https://codeforces.com/problemset/problem/1979/A

#include <iostream>
#include <algorithm>
using namespace std;

// find min pairwise max
void solve() {
    int n; cin >> n;
    int prv; cin >> prv; 
    int mn = 1E9;
    cin >> prv;
    for (int i=1; i<n; ++i) {
        int a; cin >> a;
        mn = min(mn, max(a, prv));
        prv = a;
    }
    cout << mn-1 << '\n';
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0);

    int test_cases;
    cin >> test_cases;
    while (test_cases--) {
        solve();
    }
}
