// accepted
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    int pos = 1;
    cin >> n >> k;
    if (k < n / 2) {
        cout << k << '\n';
        return;
    }
    if (n % 2) {
        pos = (k % n + (k - 1) / (n / 2)) % n;
    } else {
        pos = k % n;
    }
    pos = pos == 0 ? n : pos;
    cout << pos << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
