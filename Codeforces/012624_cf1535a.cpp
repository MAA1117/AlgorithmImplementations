#include <iostream>

/* #define _DEBUG */

void solve(){
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;
    bool fair = true;
    if((a > c && a > d)&&(b > c && b > d)){
        fair = false;
    }else if((a < c && a < d)&&(b < c && b < d)){
        fair = false;
    }
    if(fair){
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
