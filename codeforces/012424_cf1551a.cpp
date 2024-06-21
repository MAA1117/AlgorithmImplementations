#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include <cstdio>

/* #define _DEBUG */

void solve()
{
    int n;
    std::cin >> n;        
    int c = n / 3;
    int diff = n - (c + 2*c);
    if(diff == 2)
    {
        std::cout << c << " " << c + 1 << '\n';
    }
    else if(diff == 1)
    {
        std::cout << c + 1 << " " << c << '\n';
    }
    else
    {
        std::cout << c << " " << c << '\n';
    }
}

int main()
{
#ifdef _DEBUG
    std::freopen("input.txt", "r", stdin);
    // std::freopen("output.txt", "w", stdout);
#endif

    int t;
    std::cin >> t;
    while (t--)
    {
        solve();
    }
}
