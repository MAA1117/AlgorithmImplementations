// Problem: https://codeforces.com/problemset/problem/1916/B

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
/* #define _DEBUG */

void solve(){
    I64 a, b;
    cin >> a >> b;
    I64 x;
    if(b % a == 0){
        x = b * (b / a);
    }else{
        x = b * (a / __gcd(a, b));
    }
    cout << x << '\n';
}

int main(){
    std::ios_base::sync_with_stdio(false); std::cin.tie(nullptr);
    cout << std::setprecision(10);
#ifdef _DEBUG
    std::freopen("input.txt", "r", stdin);
    // std::freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--){
        solve();
    }
}
