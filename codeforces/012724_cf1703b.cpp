// Problem: https://codeforces.com/problemset/problem/1703/B

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <cstdint>
#include <set>
/* #define _DEBUG */


void solve(){
    int n;
    std::cin >> n;
    std::string s;
    std::cin >> s;
    std::set<char> char_set; 
    for(char c : s){
        char_set.insert(c);
    }
    int unique = char_set.size();
    int answer = 2*unique + (n-unique);
    std::cout << answer << '\n';
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
