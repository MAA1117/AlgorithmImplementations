// accepted
#include <bits/stdc++.h>
using namespace std;

void solve() {
    string a, b; cin >> a >> b;
    swap(a[0], b[0]);
    cout << a << " " << b << '\n';
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int test_cases;
    cin >> test_cases;
    while (test_cases--) {
        solve();
    }
}
