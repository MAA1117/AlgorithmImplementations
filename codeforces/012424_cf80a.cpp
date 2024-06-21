#include <iostream>

/* #define _DEBUG */

bool is_prime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i*i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

void solve()
{
    int n, m;
    std::cin >> n >> m;
    if (!is_prime(m))
    {
        puts("NO");
        return;
    }
    bool next = true;
    for (int i = n + 1; i < m; i++)
    {
        if (is_prime(i))
        {
            next = false;
            break;
        }
    }
    if (next)
        puts("YES");
    else
        puts("NO");
}

int main()
{
#ifdef _DEBUG
    std::freopen("input.txt", "r", stdin);
    // std::freopen("output.txt", "w", stdout);
#endif
    solve();
}
