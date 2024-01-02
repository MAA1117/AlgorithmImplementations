//cf228a
#include <iostream>
#include <vector>
#include <algorithm>

int countUnique(std::vector<int>& vec)
{
    std::sort(vec.begin(), vec.end());
    auto last = std::unique(vec.begin(), vec.end());
    return std::distance(vec.begin(), last);
}

int main()
{
    std::vector<int> vec;
    int s;
    for (int i = 0; i < 4; i++)
    {
        std::cin >> s;
        vec.push_back(s);
    }
    
    int u = countUnique(vec);

    std::cout << 4 - u;
}