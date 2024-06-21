// euler24
/*
find the 1e6th lexicographic permutation of 0123456789
*/
#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> digits = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int count = 1;
    const int target = 1000000;

    while (count < target)
    {
        std::next_permutation(digits.begin(), digits.end());
        count++;
    }

    std::cout << "1'000'000th permutation: ";
    for (int digit : digits)
    {
        std::cout << digit;
    }
    std::cout << std::endl;
}

/*
NOTES
*****
3.6288e6 permutations (10!)

[Out]
2783915460
*/
