//cf116a

#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int a, b, d;
    int c = 0;
    int e = 0;

    /* 
    (a) passengers leaving
    (b) passengers entering
    (c) passengers in the tram before stop
    (d) passengers in the tram after stop
    (e) maximum number of passengers in the tram
    */

    for (int i = 0; i < n; i++)
    {
        std::cin >> a >> b;
        d = c - a + b;
        if (d > e)
        {
            e = d;
        }
        c = d;
    }
    std::cout << e;
}

/*
#Python

n = int(input())
c, e = 0

for i in range(n):
    a, b = map(int, input().split())
    d = c - a + b
    if d > e:
        e = d
    c = d

print(e)
*/