// Problem: https://codeforces.com/problemset/problem/1676/B

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <cstdint>
/* #define _DEBUG */

typedef uint64_t ui64;

void solve(){
    int n; std::cin >> n;
    std::vector<ui64> a(n);
    for(ui64 &element : a){
        std::cin >> element;
    }
    std::sort(a.begin(), a.end());
    ui64 smallest = a[0];
    ui64 count = 0;
    for(int i=1; i<n; i++){
        count += a[i] - smallest;
    }
    printf("%llu\n", count);
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
