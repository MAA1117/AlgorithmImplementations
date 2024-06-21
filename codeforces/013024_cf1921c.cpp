// Problem: https://codeforces.com/problemset/problem/1921/C

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
    I64 n, f, a, b;
    cin >> n >> f >> a >> b;
    vector<I64> vec(n+1, 0);
    for(int i=1; i<=n; i++){
        cin >> vec[i];
    }
    for(int i=0; i<n; i++){
        I64 delta = a * (vec[i+1]-vec[i]);
        delta = min(delta, b);
        f -= delta;
        if(f <= 0){
            puts("NO");
            return;
        }
    }
    puts("YES");
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
