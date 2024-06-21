//cf750a
#include <iostream>

int problemsSolved(int n, int k)
{
    int problems = 0;
    int timeSum = 0;
    for (int i = 1; i <= n; i++)
    {
        timeSum += 5 * i;
        if (240 - k < timeSum)
            break;
        problems++;
    }
    return problems;
}

int main()
{
    int n, k;
    std::cin >> n >> k;
    std::cout << problemsSolved(n, k) << std::endl;
}

/*
NOTES
*****
-4 hours
-n problems
-problem_i -> 5*i minutes to solve
-k minutes to get to party
*/