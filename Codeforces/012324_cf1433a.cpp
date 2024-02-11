#include <iostream>
#include <string>
#include <sstream>
#include <cstdio>

/* #define _DEBUG */

void solve()
{
    std::string x;
    std::cin >> x;
    int digit = x[0] - '0';
    int size = x.size();
    int ans = 10 * (digit - 1) + (size * (size + 1)) / 2; 
    std::cout << ans << '\n';
}


int main()
{
#ifdef _DEBUG
    std::freopen("input.txt", "r", stdin);
    std::freopen("output.txt", "w", stdout);
#endif

    int t;
    std::cin >> t;
    while (t--)
    {
        solve();
    }
}
