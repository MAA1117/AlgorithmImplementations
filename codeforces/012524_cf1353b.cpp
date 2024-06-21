#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cstdio>

/* #define _DEBUG */

void solve(){
    int n, k;
    std::cin >> n >> k;
    std::vector<int> a(n);
    std::vector<int> b(n);
    for (int i=0; i<n; i++){
        std::cin >> a[i];
    }
    for (int i=0; i<n; i++){
        std::cin >> b[i];
    }
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end(), [](int a, int b) { return a>b; });
    while(k--){
        if(a[0] < b[0]){
            a.push_back(b[0]);
            b.push_back(a[0]);
            a.erase(a.begin());
            b.erase(b.begin());
        }
    }
    int sum = std::accumulate(a.begin(), a.end(), 0);
    std::cout << sum << '\n';
}

int main(){
#ifdef _DEBUG
    std::freopen("input.txt", "r", stdin);
    // std::freopen("output.txt", "w", stdout);
#endif

    int t;
    std::cin >> t;
    while (t--){
        solve();
    }
}
