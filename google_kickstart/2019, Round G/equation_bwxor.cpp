// Google Kickstart 2019 round G, problem 2: "The equation".

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>

void solve(int n, long long m, const std::vector<long long>& a)
{
    long long sure = 0;
    for (int bit = 50; bit >= 0; bit--)
    {
        int count = 0;
        for (long long x : a)
        {
            if (x & (1LL << bit))
            {
                count++;    
            }
        }
        sure += (1LL << bit) * std::min(count, n - count); 
    }
    long long best = 0;
    long long already = sure;
    for (int bit = 50; bit >= 0; bit--)
    {
        int count = 0;
        for (long long x : a)
        {
            if (x & (1LL << bit))
            {
                count++;    
            }
        }
        long long hack = (1LL << bit) * std::min(count, n - count);
        long long maybe = already + (1LL << bit) * (n - count) - hack;
        if (maybe <= m)
        {
            already = maybe;
            best ^= 1LL << bit;
        }
        else
        {
            maybe = already + (1LL << bit) * count - hack;
            if (maybe <= m)
            {
                already = maybe;
            }
            else
            {
                puts("-1");
                return;
            }
        }
    }
    if (already <= m)
    {
        printf("%lld\n", best);
    }
    else
    {
        puts("-1");
    }
}

int main()
{
    std::string INPUT = "4\n"
                        "3 27\n"
                        "8 2 4\n"
                        "4 45\n"
                        "30 0 4 11\n"
                        "1 0\n"
                        "100\n"
                        "6 2\n"
                        "5 5 1 5 1 0";
    std::istringstream iss(INPUT);
    std::cin.rdbuf(iss.rdbuf());

    int t;
    std::cin >> t;
    while(t--)
    {
        int n;
        long long m;
        std::cin >> n >> m;
        std::vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            std::cin >> a[i];
        }
        solve(n, m, a);
    }
}

/*
Bitwise XOR
    -> A^B
    -> True when A or B is true but not both.

Bitwise operations
    -> A&B -> AND
    -> A|B -> OR
    -> A^B -> XOR

Bitwise shifts
    -> ( x << k ) -> shift left by k => x*2**k
    -> ( x >> k ) -> shift right by k => floor( x / 2**k )

    -> 16 = 10000_2 = 1<<4

4
3 27
8 2 4
4 45
30 0 4 11
1 0
100
6 2
5 5 1 5 1 0

*/
