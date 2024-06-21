#include <iostream>
#include <vector>
#include <utility>
#include "src/hfiles/timer.h"

std::vector<std::pair<int, int>> findPythagoreanTriples(int sumTotal)
{
    std::vector<std::pair<int, int>> triples;
    for (int A = 1; A < sumTotal / 3; ++A)
    {
        for (int B = A; B < (sumTotal - A) / 2; ++B)
        {
            int C = sumTotal - A - B;
            if (A * A + B * B == C * C)
            {
                triples.push_back({A, B});
            }
        }
    }
    return triples;
}

int main()
{
    Timer tr;
    int maxTriples = 0;
    int maxSum = 0;
    for (int i = 1; i <= 1000; ++i)
    {
        auto triples = findPythagoreanTriples(i);
        int triplesCount = triples.size();
        if (triplesCount > maxTriples)
        {
            maxTriples = triplesCount;
            maxSum = i;
        }
    }

    std::cout << "Max Sum: " << maxSum << ", Max Triples: " << maxTriples << std::endl;
}
