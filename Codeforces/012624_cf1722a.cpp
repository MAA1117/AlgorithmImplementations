#include <iostream>
#include <algorithm>
#include <string>

// CORRECT SOLUTION
int main(){
    std::string name = "Timur";
    std::sort(name.begin(), name.end());
    int t;
    std::cin >> t;
    for (int i = 0; i < int(t); i++){
        int n;
        std::cin >> n;
        std::string s;
        std::cin >> s;
        std::sort(s.begin(), s.end());
        std::cout << (s == name ? "YES\n" : "NO\n");
    }
}

/*
// INCORRECT SOLUTION
void solve(){
    std::string name = "Timur";
    std::sort(name.begin(), name.end());
    int n;
    std::cin >> n;
    if(n != 5){
        puts("NO");
        return;
    }// Exiting the function here interrupts the input stream.
    std::string s;
    std::cin >> s;
    std::sort(s.begin(), s.end());
    if(s == name){
        puts("YES");  
    }else{
        puts("NO");  
    }
}

int main(){
    int t;
    std::cin >> t;
    while (t--){
        solve();
    }
}
*/
