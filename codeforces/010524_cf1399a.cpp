//cf1399a
#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int T;
    std::cin >> T;

    while(T--)
    {
        int n;
        std::cin >> n;

        std::vector<int> vecA(n);
        for (int& value : vecA)
        {
            std::cin >> value;
        }

        std::sort(vecA.begin(), vecA.end());

        bool contiguous = true;
        for (int i = 0; i < n - 1; i++)
        {
            if (std::abs(vecA[i] - vecA[i + 1]) > 1)
            {
                std::cout << "NO" << '\n';
                contiguous = false;
                break;
            }
        }

        if (contiguous)
            std::cout << "YES" << '\n';
    }
}

/*
NOTES
*****
"You are given an array consisting of n
positive integers.

In one move, you can choose two indices i
and j (i≠j) such that the absolute difference
between ai and aj is no more than one (|ai−aj|≤1)
and remove the smallest of these two elements.

If two elements are equal, you can remove any of them
(but exactly one).

Your task is to find if it is possible to obtain
the array consisting of only one element using
several (possibly, zero) such moves or not."
*/
