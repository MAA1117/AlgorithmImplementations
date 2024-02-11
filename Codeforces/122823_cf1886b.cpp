#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>

int main()
{
    std::ios_base::sync_with_stdio(false); std::cin.tie(nullptr);

    // double dist(int x1, int y1, int x2, int y2)
    // {
    //     return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    // }

    auto dist = [](int x1, int y1, int x2, int y2)
    {
        return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    };

    int t;
    std::cin >> t;
    while (t--)
    {
        int px, py, ax, ay, bx, by;
        std::cin >> px >> py >> ax >> ay >> bx >> by;
        double pa = dist(px, py, ax, ay), pb = dist(px, py, bx, by);
        double oa = dist(0, 0, ax, ay), ob = dist(0, 0, bx, by);
        double ab = dist(ax, ay, bx, by);
        double ans = 1e9;
        ans = std::min(ans, std::max(pa, oa));
        ans = std::min(ans, std::max(pb, ob));
        ans = std::min(ans, std::max({ab / 2, pa, ob}));
        ans = std::min(ans, std::max({ab / 2, pb, oa}));
        std::cout << std::setprecision(10) << std::fixed << ans << '\n';
    }
}

/*
NOTES
*****
[In]
2
3 3
1 0
-1 6
3 3
-1 -1
4 3

[Out]
3.6055512755
[85us (0.0850000000ms)]
3.2015621187
[26us (0.0260000000ms)]
*/