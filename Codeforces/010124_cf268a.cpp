//cf268a
#include <iostream>
#include <vector>

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> homeColors(n);
    std::vector<int> guestColors(n);

    for (int i = 0; i < n; ++i)
    {
        std::cin >> homeColors[i] >> guestColors[i];
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j && homeColors[i] == guestColors[j])
            {
                count++;
            }
        }
    }
    std::cout << count << std::endl;
}
