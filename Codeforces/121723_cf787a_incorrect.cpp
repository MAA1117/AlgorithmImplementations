//cf787a
#include <iostream>
#include <vector>
#include <algorithm>

int countUnique(std::vector<int>& vec)
{
    std::sort(vec.begin(), vec.end());
    auto last = std::unique(vec.begin(), vec.end());
    return std::distance(vec.begin(), last);
}

int main()
{
    int a, b, c, d;
    std::cin >> a >> b;
    std::cin >> c >> d;

    bool rAlwaysEven = false, rAlwaysOdd = false;
    bool mAlwaysEven = false, mAlwaysOdd = false;

    if (b % 2 == 0 && a % 2 == 0)
    {
        rAlwaysEven = true;
    }

    if (b % 2 && a % 2 == 0)
    {
        rAlwaysOdd = true;
    }
    
    if (d % 2 == 0 && c % 2 == 0)
    {
        mAlwaysEven = true;
    }
    
    if (d % 2 && c % 2 == 0)
    {
        mAlwaysOdd = true;
    }

    if (rAlwaysEven && mAlwaysOdd)
    {
        std::cout << -1 << std::endl;
        return 0;
    }

    if (rAlwaysOdd && mAlwaysEven)
    {
        std::cout << -1 << std::endl;
        return 0;
    }

    std::vector<int> vecTimes, rTimes, mTimes;

    int rScreams = 0, mScreams = 1;

    int prevUnique = 0;
    int i = 0;
    while (rScreams != mScreams)
    {
        rScreams = b + (a * i);
        vecTimes.push_back(rScreams);
        rTimes.push_back(rScreams);


        mScreams = d + (c * i);
        vecTimes.push_back(mScreams);
        mTimes.push_back(mScreams);

        int unique = countUnique(vecTimes);
        if (unique < prevUnique + 2) break;
        
        prevUnique = unique;
        i++;
    }

    std::sort(rTimes.begin(), rTimes.end(), [](int a, int b)
    {
        return a > b;
    });

    std::sort(mTimes.begin(), mTimes.end(), [](int a, int b)
    {
        return a > b;
    });

    if (rTimes[0] < mTimes[0])
    {
        std::cout << rTimes[0] << std::endl;
    }
    else
    {
        std::cout << mTimes[0] << std::endl;
    }
}