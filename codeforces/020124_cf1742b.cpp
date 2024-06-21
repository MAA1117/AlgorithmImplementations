// Problem: https://codeforces.com/problemset/problem/1742/B

#include <iostream>
#include <utility>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <set>
#include <cstdio>
#include <cstdint>
#include <iomanip>
using std::cin, std::cout, std::endl; // iostream
using std::sqrt, std::pow, std::abs, std::fabs; // cmath
using std::vector, std::string, std::set, std::pair; 
using std::sort, std::min, std::max, std::find, std::reverse; // algorithm
using std::__gcd; // algorithm
typedef uint64_t U64;
typedef int64_t I64;
#define REVERSE [](int a, int b){ return a>b; }
#define FREOPEN_IN std::freopen("input.txt", "r", stdin)
#define FREOPEN_OUT std::freopen("output.txt", "w", stdout)
#define SET_IO std::ios_base::sync_with_stdio(false); std::cin.tie(nullptr)

// #define _DEBUG


void solve(){
    int n;
    cin >> n;
    set<int> a;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        a.insert(x);
    }
    a.size() == n ? cout << "YES\n" : cout << "NO\n";
}

int main(){
    SET_IO;
#ifdef _DEBUG
    FREOPEN_IN;
#endif

    int t;
    cin >> t;
    while (t--){
        solve();
    }
}
