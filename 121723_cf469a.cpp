//cf469a
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
    int n, pX, pY, num;
    std::cin >> n;
    
    std::vector<int> vecX;

    std::cin >> pX;
    for (int i = 0; i < pX; i++)
    {
        std::cin >> num;
        vecX.push_back(num);
    }

    std::cin >> pY;
    for (int i = 0; i < pY; i++)
    {
        std::cin >> num;
        vecX.push_back(num);
    }

    int unique = countUnique(vecX);

    if (unique == n)
    {
        std::cout << "I become the guy." << std::endl;
    }
    else
    {
        std::cout << "Oh, my keyboard!" << std::endl;
    }
}