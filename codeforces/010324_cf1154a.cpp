//cf1154a
#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> x(4);
    std::cin >> x[0] >> x[1] >> x[2] >> x[3];

    std::sort(x.begin(), x.end());

    int a = x[3] - x[0];
    int b = x[3] - x[1];
    int c = x[3] - x[2];

    std::cout << a << " " << b << " " << c << std::endl;
}

/*
NOTES
*****

x1 = a + b
x2 = a + c
x3 = b + c
x4 = a + b + c

(x1 -> x4 will be input in any order)

find a, b, c
*/