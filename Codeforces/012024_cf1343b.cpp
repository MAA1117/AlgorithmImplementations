#include <iostream>
#include <string>
#include <sstream>

int main()
{
    std::string INPUT = 
        "5\n"
        "2\n"
        "4\n"
        "6\n"
        "8\n"
        "10";
    std::istringstream iss(INPUT);
    std::cin.rdbuf(iss.rdbuf());

    int t;
    std::cin >> t;
    while (t--)
    {
        int n;
        std::cin >> n;

        if(n % 4)
            puts("NO");
        else
        {
            puts("YES");
            int evenSum = 0;
            int oddSum = 0;
            for(int i=2; i<=n; i+=2)
            {
                evenSum += i;
                std::cout << i << " ";
            }
            for(int i=1; i<n-1; i+=2)
            {
                oddSum += i;
                std::cout << i << " ";
            }
            std::cout << evenSum - oddSum << '\n';
        }
    }
}
