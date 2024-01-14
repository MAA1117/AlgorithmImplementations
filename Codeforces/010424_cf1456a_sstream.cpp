//cf1456a

#include <iostream>
#include <string>
#include <vector>
#include <sstream>

int main()
{
    // std::string INPUT = "3\n"
    //                     "10 3 2\n"
    //                     "0101010101\n"
    //                     "2 2\n"
    //                     "5 4 1\n"
    //                     "00000\n"
    //                     "2 10\n"
    //                     "11 2 3\n"
    //                     "10110011000\n"
    //                     "4 3";
    // std::istringstream iss(INPUT);
    // std::cin.rdbuf(iss.rdbuf());

    int T;
    std::cin >> T;
    while (T--)
    {
        int N, P, K;
        std::cin >> N >> P >> K;
        P--;
        std::string S;
        std::vector<int> A(N);
        std::cin >> S;
        int X, Y;
        std::cin >> X >> Y;
        int ans = N * X;
        
        for (int i = N - 1; i >= P; i--)
        {
            A[i] = (S[i] == '1' ? 0 : X);
            if (i + K < N)
            {
                A[i] += A[i + K];
            }
            ans = std::min(ans, A[i] + Y * (i - P));
        }
        std::cout << ans << '\n';
    }
        


}

/*
NOTES
*****
n -> # cells
p -> first cell that should contain a platform
k -> period of ball bouncing required
    next cell -> p + k
    
x -> time required to add a platform
y -> time required to remove the first cell

string a -> the initial pattern of 1s and 0s written without spaces
    a_i = 0 -> no platform in the cell
    a_i = 1 -> platform 

sum <= 1e5

[output] -> int(minimum number of seconds needed to modify the level)

*/