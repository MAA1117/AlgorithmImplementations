#include <iostream>

int timeToSolve(int problems)
{
    return (problems * (problems + 1) / 2) * 5;
}
// n * (n + 1) / 2  --> sum of first n natural numbers

int maxProblems(int n, int k)
{
    int left = 0;
    int right = n;
    int result = 0;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (timeToSolve(mid) <= 240 - k)
        {
            result = mid;
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return result;
}

int main()
{
    int n = 4, k = 190;
    std::cout << maxProblems(n, k) << std::endl;
}
