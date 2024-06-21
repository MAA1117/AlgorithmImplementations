#include <iostream>
#include <algorithm>
#include <vector>


int main()
{
    int n; std::cin >> n;
    std::vector<int> citizens(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> citizens[i];
    }
    int max = *std::max_element(citizens.begin(), citizens.end());
    int total = 0;
    for (int x : citizens)
    {
        total += max - x;    
    }
    std::cout << total << '\n';
}
