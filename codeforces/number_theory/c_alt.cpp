// accepted
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; // n -> number of positions
              // k -> hours
    cin >> n >> k;
    k--;
    if (n % 2) {
        int intersections = k / ((n - 1) / 2);
        cout << 1 + (k + intersections) % n << '\n';
        return;
    } else {
        cout << 1 + k % n << '\n';
        return; // somehow makes execution faster
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
