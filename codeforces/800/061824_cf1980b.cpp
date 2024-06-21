// https://codeforces.com/problemset/problem/1980/B

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void solve() {
    int n, f, k; cin>>n>>f>>k;
    vector<int> cubes(n); for (auto &it:cubes) cin>>it;
    int fval = cubes[f-1];
    sort(cubes.begin(), cubes.end(), greater<int>());
    int i = k-1;
    if (cubes[i] > fval) {
        cout<< "NO\n";
    } else if (cubes[i] < fval) {
        cout<< "YES\n";
    } else if (i+1 < n && cubes[i+1] == fval) {
        cout<< "MAYBE\n";
    } else {
        cout<< "YES\n";
    }
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0);

    int test_cases;
    cin >> test_cases;
    while (test_cases--) {
        solve();
    }
}
