#include <iostream>
#include <vector>

int findUniqueIndex(const std::vector<int>& arr)
{
    if (arr[0] != arr[1])
    {
        return (arr[0] == arr[2]) ? 2 : 1;
    }
    for (int i = 2; i < arr.size(); i++)
    {
        if (arr[i] != arr[0])
        {
            return i + 1;
        }
    }
    return -1; 
}

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        int n;
        std::cin >> n;
        std::vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            std::cin >> arr[i];
        }
        std::cout << findUniqueIndex(arr) << std::endl;
    }
}
