// Problem: https://codeforces.com/problemset/problem/0000/A

#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#include <cstdio>
#include <cstdint>
#include <cmath>
#define _DEBUG

typedef uint64_t ui64;
typedef int64_t i64;


int score(const std::string& s, int size){
    int score=0;
    for(int i=0; i < size/2; i++){
        if(s[i] != s[size-(i+1)]){
            score++;
        }
    }
    return score;
}

void solve(int case_num){
    int n, k;
    std::cin >> n >> k;
    std::string s;
    std::cin >> s;
    if(k > n/2){
        std::cout << -1 << '\n';
        return;
    }
    int answer = std::abs(k - score(s,n));
    printf("Case #%d: %d\n", case_num, answer);
}

int main(){
#ifdef _DEBUG
    std::freopen("input.txt", "r", stdin);
    // std::freopen("output.txt", "w", stdout);
#endif

    int t;
    std::cin >> t;
    for(int i=0; i<t; i++){
        solve(i);
    }
}

