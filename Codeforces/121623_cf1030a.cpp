//cf1030a
#include <iostream>
#include <cstdlib>

int main()
{
    int n;
    std::cin >> n;

    int* array = new int[n];

    for (int i = 0; i < n; i++)
    {
        std::cin >> array[i];
        if (array[i] == 1)
        {
            std::cout << "Hard";
            delete[] array;
            exit(0);
        }
    }

    delete[] array;
    std::cout << "Easy";
}