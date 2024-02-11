#include <iostream>
#include <string>
#include <cstdio>

/* #define _DEBUG */

void solve(){
    std::string s;
    std::cin >> s;
    int size = s.size();
    if(size % 2){
        puts("NO");
        return;
    }
    std::string sub1 = s.substr(0, size/2);
    std::string sub2 = s.substr(size/2);
    if(sub1 == sub2){
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
