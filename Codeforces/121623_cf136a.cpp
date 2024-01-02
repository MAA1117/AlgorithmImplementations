//cf136a
#include <iostream>
#include <vector>

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> order(n + 1), gifts(n + 1);

    for(int i = 1; i <= n; ++i)
    {
        std::cin >> order[i];
    }

    for(int i = 1; i <= n; ++i)
    {
        gifts[order[i]] = i;
    }

    for(int i = 1; i <= n; ++i)
    {
        std::cout << gifts[i] << " ";
    }

    std::cout << std::endl;
}