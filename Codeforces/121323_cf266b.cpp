//cf266b
#include <iostream>
#include <string>

int main()
{
    int n, t;
    std::cin >> n >> t;
    std::string queue;
    std::cin >> queue;
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (queue[j] == 'B' && queue[j + 1] == 'G')
            {
                queue[j] = 'G';
                queue[j + 1] = 'B';
                j++;
            }
        }
    }
    std::cout << queue << std::endl;
}

/*
compilation error:

int main()
{
    int n, t;
    std::cin >> n >> t;
    char *queue = new char[n];
    std::cin >> queue;
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (queue[j] == 'B' && queue[j + 1] == 'G')
            {
                queue[j] = 'G';
                queue[j + 1] = 'B';
                j++;
            }
        }
    }
    std::cout << queue << std::endl;
    delete[] queue;
}

#python
n, t = map(int, input().split())
queue = list(input())
for i in range(t):
    for j in range(n - 1):
        if queue[j] == 'B' and queue[j + 1] == 'G':
            queue[j], queue[j + 1] = queue[j + 1], queue[j]
            j += 1
print(''.join(queue))
*/