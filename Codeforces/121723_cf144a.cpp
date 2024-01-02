//cf144a
#include <iostream>
#include <vector>
#include <limits>

int main()
{
    int n;
    std::cin >> n;
    
    std::vector<int> heightVec;
    
    int height;
    int heightMax = 0;
    int heightMin = std::numeric_limits<int>::max();
    int indexMax = 0, indexMin = 0;
    
    for (int i = 0; i < n; i++)
    {
        std::cin >> height;
        heightVec.push_back(height);

        if (height > heightMax)
        {
            heightMax = height;
            indexMax = i;
        }

        if (height <= heightMin)
        {
            heightMin = height;
            indexMin = i;
        }
    }

    int moveCount;

    if (indexMax < indexMin)
    {
        moveCount = indexMax + (n - (indexMin + 1));
        std::cout << moveCount << std::endl;   
    }
    else
    {
        moveCount = indexMax + (n - (indexMin + 1)) - 1;
        std::cout << moveCount << std::endl;   
    }
}


//alternative

/*
#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int n;
    std::cin >> n;
    std::vector<int> soldiers(n);

    for (int i = 0; i < n; ++i)
    {
        std::cin >> soldiers[i];
    }

    int max_height_index = std::distance(soldiers.begin(), std::max_element(soldiers.begin(), soldiers.end()));
    int min_height_index = std::distance(soldiers.begin(), std::min_element(soldiers.rbegin(), soldiers.rend()).base()) - 1;

    int swaps_for_max = max_height_index; // Swaps to bring the tallest to the front
    int swaps_for_min = n - min_height_index - 1; // Swaps to bring the shortest to the end

    // If the tallest is to the right of the shortest, they will overlap during swapping, so we subtract one swap.
    if (max_height_index > min_height_index)
    {
        std::cout << swaps_for_max + swaps_for_min - 1 << std::endl;
    }
    else
    {
        std::cout << swaps_for_max + swaps_for_min << std::endl;
    }

    return 0;
}
*/