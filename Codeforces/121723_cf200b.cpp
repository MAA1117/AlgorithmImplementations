//cf200b
#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    double p;
    double volume = 0;
    for (int i=0; i<n; i++)
    {
        std::cin >> p;
        volume += p / n;
    }
    std::cout << volume << std::endl;
}