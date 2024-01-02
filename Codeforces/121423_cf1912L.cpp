//cf1912L
#include <iostream>
#include <string>

int main()
{
    int n;
    std::string items;
    std::cin >> n >> items;

    int totalLoaves = 0, totalOnions = 0;
    for (char item : items)
    {
        if (item == 'L') ++totalLoaves;
        else ++totalOnions;
    }

    for (int k = 1; k < n; ++k)
    {
        int myLoaves = 0, myOnions = 0;
        for (int i = 0; i < k; ++i)
        {
            if (items[i] == 'L') ++myLoaves;
            else ++myOnions;
        }

        if (myLoaves != totalLoaves - myLoaves && myOnions != totalOnions - myOnions)
        {
            std::cout << k << std::endl;
            return 0;
        }
    }
    std::cout << -1 << std::endl;
}
