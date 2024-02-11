//cf155a
#include <iostream>
#include <vector>
#include <algorithm>

bool isLargest(int n, std::vector<int> &vec)
{
    for (int element : vec)
    {
        if (n <= element)
            return false;
    }
    return true;
}

bool isSmallest(int n, std::vector<int> &vec)
{
    for (int element : vec)
    {
        if (n >= element)
            return false;
    }
    return true;
}

int main()
{
    int n;
    std::cin >> n;
    std::vector<int> performances;
    int amazingPerformances = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        std::cin >> a;
        if (performances.size() > 0)
        {
            if (isLargest(a, performances) || isSmallest(a, performances))
                amazingPerformances++;
        }
        performances.push_back(a);
    }
    std::cout << amazingPerformances << std::endl;
}
