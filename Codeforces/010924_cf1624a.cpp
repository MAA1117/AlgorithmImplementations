//cf 1624a
#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int t; std::cin >> t;
    while(t--)
    {
        int n; std::cin >> n;
        std::vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            std::cin >> a[i];
        }
        std::sort(a.begin(), a.end());
        std::cout << a[n-1] - a[0] << '\n';
    }
}
