#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include <cstdio>

/* #define _DEBUG */

void solve()
{
    std::vector<int> ab(2);
    std::cin >> ab[0] >> ab[1];
    std::sort(ab.begin(), ab.end());
    int ans=0;
    if(2*ab[0] >= ab[1])
    {
        ans = ((2*ab[0]) * (2*ab[0]));
    }
    else
    {
        ans = (ab[1]) * (ab[1]);
    }
    std::cout << ans << '\n';
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
