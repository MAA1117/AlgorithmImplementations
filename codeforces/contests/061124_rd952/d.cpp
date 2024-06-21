#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m; cin >> n >> m;
    int mx[] = {0, 0, 0};
    int f = 0;
    char prv = 'A'; 
    for (int i = 0; i < n; ++i) {
        char c; 
        int cnt = 0;
        for (int j = 0; j < m; ++j) {
            cin >> c;
            if (c == '#') {
                if (c != prv) f = j;
                ++cnt;
            }
            prv = c;
        }
        if (cnt > mx[0]) {
            mx[0] = cnt;
            mx[1] = i;
            mx[2] = f;
        }
    }
    int ans[] = {mx[2] + mx[0]/2 + 1, mx[1]+1};
    cout << ans[1] << " " << ans[0] << '\n';
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int test_cases;
    cin >> test_cases;
    while (test_cases--) {
        solve();
    }
}
