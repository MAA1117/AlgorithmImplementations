//cf381a
#include <iostream>
#include <vector>
#include <sstream>

int main()
{
/*
    std::string INPUT = "4\n"
                        "4 1 2 10";
    std::istringstream iss(INPUT);
    std::cin.rdbuf(iss.rdbuf());

    int n;
    std::cin >> n;
    std::vector<int> nums(n);
    for (int i = 0; i < n; ++i)
        std::cin >> nums[i];
*/
    int serejaSum = 0, dimaSum = 0;
    int start = 0, end = n - 1;
    bool isSerejaTurn = true;

    while (start <= end)
    {
        int& chosenNum = (nums[start] > nums[end]) ? nums[start++] : nums[end--];

        if (isSerejaTurn)
            serejaSum += chosenNum;
        else
            dimaSum += chosenNum;

        isSerejaTurn = !isSerejaTurn;
    }

    std::cout << serejaSum << " " << dimaSum << '\n';
}

