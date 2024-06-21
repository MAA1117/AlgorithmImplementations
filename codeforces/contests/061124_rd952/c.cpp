// accepted
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<ll> a(n);
    for (auto &nx : a) {
        cin >> nx;
    }
    vector<ll> psums(n + 1, 0);
    for (ll i = 1; i < n + 1; ++i) {
        psums[i] = psums[i - 1] + a[i - 1];
    }
    ll ans = 0, mx = 0;
    for (int i = 0; i < n; ++i) {
        mx = max(mx, a[i]);
        if (psums[i+1] == 2*mx) 
            ++ans;
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int test_cases;
    cin >> test_cases;
    while (test_cases--) {
        solve();
    }
}
