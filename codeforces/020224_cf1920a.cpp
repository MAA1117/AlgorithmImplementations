
// Problem: https://codeforces.com/problemset/problem/1920/A

#include <bits/stdc++.h>
using namespace std;

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
    vector<int> bad;
    int min1 = 0;
    int max2 = 1e9;
    while(n--){
        int a, b;
        cin >> a >> b;
        if(a==1){
            min1 = max(b, min1);
        }else if(a==2){
            max2 = min(b, max2);
        }else{
            bad.push_back(b);
        }
    }
    if(max2 < min1){
        cout << 0 << '\n';
        return;
    }
    int bad_count = 0;
    if(bad.size() != 0){
        for(int x : bad){
            if(x >= min1 && x <= max2){
                bad_count++;
            }
        }
    }
    cout << max2 - min1 - bad_count + 1 << '\n';
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
