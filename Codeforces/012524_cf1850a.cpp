#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdio>

/* #define _DEBUG */

void solve(){
    std::vector<int> vec(3);
    std::cin >> vec[0] >> vec[1] >> vec[2];
    std::sort(vec.begin(), vec.end());
    if(vec[1] + vec[2] >= 10){
        puts("YES");
    }else{
        puts("NO");
    }
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
