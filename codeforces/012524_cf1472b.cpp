#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cstdio>

/* #define _DEBUG */

void solve(){
    int n;
    std::cin >> n;
    int count1 = 0, count2 = 0;
    for(int i=0; i<n; i++){
        int x;
        std::cin >> x;
        if(x == 1){
            count1++;
        }else{
            count2++;
        }
    }
    /* int sum = count1 + 2*count2; */
    /* if(sum % 2){ */
    /*     puts("NO"); */
    /*     return; */
    /* } */
    if(count1 % 2 || (count1 == 0 && count2 % 2)){
        puts("NO");
    }else{
        puts("YES");
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
