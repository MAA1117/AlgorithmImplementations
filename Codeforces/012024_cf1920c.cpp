#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm> // __gcd
#include <cmath> // abs

void solve()
{
    int n; 
    std::cin >> n;

    std::vector<int> A(n);
    for (int &i : A)
        std::cin >> i;
    
    int ans = 0;
    for (int k = 1; k <= n; k++)
    {
        if (n % k == 0)
        {
            int g = 0;
            for (int i = 0; i + k < n; i++)
                g = std::__gcd(g, std::abs(A[i + k] - A[i]));
            ans += (g != 1);
        }
    }
    std::cout << ans << '\n';
}

int main()
{
    /* std::string INPUT = */ 
    /*     "8\n" */
    /*     "4\n" */
    /*     "1 2 1 4\n" */
    /*     "3\n" */
    /*     "1 2 3\n" */
    /*     "5\n" */
    /*     "1 1 1 1 1\n" */
    /*     "6\n" */
    /*     "1 3 1 1 3 1\n" */
    /*     "6\n" */
    /*     "6 2 6 2 2 2\n" */
    /*     "6\n" */
    /*     "2 6 3 6 6 6\n" */
    /*     "10\n" */
    /*     "1 7 5 1 4 3 1 3 1 4\n" */
    /*     "1\n" */
    /*     "1"; */
    /* std::istringstream iss(INPUT); */
    /* std::cin.rdbuf(iss.rdbuf()); */

    int t;
    std::cin >> t;
    while (t--)
    {
        solve();
    }
}
