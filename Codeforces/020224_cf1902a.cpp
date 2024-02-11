#include <bits/stdc++.h>
using namespace std;
typedef uint64_t U8;
typedef int64_t I8;
#define REVERSE [](int a, int b){ return a>b; }
#define FREOPEN_IN std::freopen("input.txt", "r", stdin)
#define FREOPEN_OUT std::freopen("output.txt", "w", stdout)
#define SET_IO std::ios_base::sync_with_stdio(false); std::cin.tie(nullptr)

// #define _DEBUG


void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    for(int i=0; i<n; i++){
        if(s[i] != '1'){
            puts("YES");
            return;
        }
    }
    puts("NO");    
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
