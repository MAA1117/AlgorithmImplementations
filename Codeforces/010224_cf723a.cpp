//cf723a
#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> x(3);
    std::cin >> x[0] >> x[1] >> x[2];

    std::sort(x.begin(), x.end());
    std::cout << x[2] - x[0] << std::endl;
}