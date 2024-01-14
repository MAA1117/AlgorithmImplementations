#include <iostream>
#include <vector>
#include <algorithm>

bool istorn(int n, const std::vector<int>& vec)
{
    return std::find(vec.begin(), vec.end(), n) != vec.end();    
}

int main()
{
    int t; std::cin >> t;
    int testcase = 1;
    while(t--)
    {
        int n, m, q;
        std::cin >> n >> m >> q;
        std::vector<int> tornpages(m);
        for (int i = 0; i < m; i++)
        {
            std::cin >> tornpages[i];                        
        }
        std::vector<int> readers(q);
        for (int i = 0; i < q; i++)
        {
            std::cin >> readers[i];
        }
        int y = 0;
        for (int r : readers)
        {
            for (int j = r; j <= n; j += r)
            {
                if (!istorn(j, tornpages))
                {
                    y++;
                }
            }
        }
        std::cout << "Case #" << testcase << ": " << y << '\n';
        testcase++;
    }
}

/*
3
11 1 2
8
2 3
11 11 11
1 2 3 4 5 6 7 8 9 10 11
1 2 3 4 5 6 7 8 9 10 11
1000 6 1
4 8 15 16 23 42
1
*/
