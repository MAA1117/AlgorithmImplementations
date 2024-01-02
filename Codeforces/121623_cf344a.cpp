//cf 344a
#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int m;
    int prev = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        std::cin >> m;
        if (m != prev) count++;
        prev = m;
    }
    std::cout << count;
}

/*
#python

n = int(input())
prev = 0
count = 0
for i in range(n):
    m = int(input())
    if m != prev:
        count += 1
    prev = m
print(count) 

#exceeds time limit
*/