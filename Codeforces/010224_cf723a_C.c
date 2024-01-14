#include <stdio.h>

int main()
{
    int x[3];
    scanf("%d", &x[0]);
    scanf("%d", &x[1]);
    scanf("%d", &x[2]);

    int max = 0;
    int min = 0;

    if (x[0] > x[1])
    {
        max = x[0];
        min = x[1];
    }        
    else
    {
        max = x[1];
        min = x[0];
    }

    if (x[2] > max)
    {
        max = x[2];
    }
    else if (x[2] < min)
    {
        min = x[2];
    }

    int difference = max - min;
    printf("%d\n", difference);
}