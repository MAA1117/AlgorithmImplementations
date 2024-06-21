// accepted
#include <bits/stdc++.h>
using namespace std;
#define int long long

int count_positions(int x, int y, int z, int k) {
    int mx_cnt = 0;
    for (int a = 1; a * a * a <= k; ++a) {
        if (k % a != 0) continue;
        int k_div_a = k / a;
        for (int b = 1; b * b <= k_div_a; ++b) {
            if (k_div_a % b != 0) continue;
            int c = k_div_a / b;
            if (a <= x && b <= y && c <= z) {
                int countX = x - a + 1;
                int countY = y - b + 1;
                int countZ = z - c + 1;
                mx_cnt = max(mx_cnt, countX * countY * countZ);
            }
            if (a <= x && c <= y && b <= z) {
                int countX = x - a + 1;
                int countY = y - c + 1;
                int countZ = z - b + 1;
                mx_cnt = max(mx_cnt, countX * countY * countZ);
            }
            if (b <= x && a <= y && c <= z) {
                int countX = x - b + 1;
                int countY = y - a + 1;
                int countZ = z - c + 1;
                mx_cnt = max(mx_cnt, countX * countY * countZ);
            }
            if (b <= x && c <= y && a <= z) {
                int countX = x - b + 1;
                int countY = y - c + 1;
                int countZ = z - a + 1;
                mx_cnt = max(mx_cnt, countX * countY * countZ);
            }
            if (c <= x && a <= y && b <= z) {
                int countX = x - c + 1;
                int countY = y - a + 1;
                int countZ = z - b + 1;
                mx_cnt = max(mx_cnt, countX * countY * countZ);
            }
            if (c <= x && b <= y && a <= z) {
                int countX = x - c + 1;
                int countY = y - b + 1;
                int countZ = z - a + 1;
                mx_cnt = max(mx_cnt, countX * countY * countZ);
            }
        }
    }
    return mx_cnt;
}

void solve() {
    int x, y, z, k;
    cin >> x >> y >> z >> k;
    cout << count_positions(x, y, z, k) << '\n';
}

signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve;
    }
}
