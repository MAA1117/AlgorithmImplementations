#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>

/* #define _DEBUG */

void solve(){
    int n;
    std::cin >> n;
    std::vector<int> vec(n);
    for(int i=0; i<n; i++){
        std::cin >> vec[i];
    }
    std::sort(vec.begin(), vec.end());
    int prev = vec[0];
    int min_diff = 1e9;
    vec.erase(vec.begin());
    for(int x : vec){
        int diff = x - prev;
        min_diff = std::min(diff, min_diff);
        prev = x;
    }
    std::cout << min_diff << '\n';
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
