#include <iostream>

/* #define _DEBUG */

void solve(int n, int m){
    for(int i=0; i<n; i++){
        for(int i=0; i<m; i++){
            char color;
            std::cin >> color;
            if(color == 'C' || color == 'Y' || color == 'M'){
                puts("#Color");
                return;
            }
        }
    }
    puts("#Black&White");
}

int main(){
#ifdef _DEBUG
    std::freopen("input.txt", "r", stdin);
    // std::freopen("output.txt", "w", stdout);
#endif

    int n, m;
    std::cin >> n >> m;
    solve(n, m);
}
