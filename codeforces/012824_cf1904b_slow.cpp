// Problem: https://codeforces.com/problemset/problem/1904/B

#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#include <cstdio>
#include <iomanip>
#include <cstdint>
#include "src/headers/timer.h"
#define _DEBUG

typedef uint64_t ui64;

void solve(){
    int n; std::cin >> n;
    std::vector<int> vec1(n);
    for(int &element : vec1){
        std::cin >> element;
    }
    std::vector<int> vec2(vec1);
    std::sort(vec2.begin(), vec2.end());
    std::vector<int> ans;
    ui64 sum = 0;
    for(int i=0; i<n; i++){
        sum = vec1[i];
        int count = 0;
        bool passed_once = false;
        for(int j=0; j<=n; j++){
            if(vec2[j]==vec1[i] && passed_once==false){
                passed_once=true;
                continue;
            }
            if(vec2[j] <= sum && j < n){
                sum += vec2[j];
                count++;
            }else{
                ans.push_back(count);
                /* std::cout << count << " "; */
                break;
            }
        }
    }
    for(int x : ans){
        std::cout << x << " ";
    }
    std::cout << std::endl;
}

int main(){
    std::ios_base::sync_with_stdio(false); std::cin.tie(nullptr);
#ifdef _DEBUG
    std::freopen("input.txt", "r", stdin);
    std::freopen("output.txt", "w", stdout);
#endif

    Stopwatch timer;
    int t;
    std::cin >> t;
    while (t--){
        solve();
    }
}
