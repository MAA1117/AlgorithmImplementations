#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int charCompare(const void *a, const void *b)
{
    return *(const char *)a - *(const char *)b;
}

int permutable(char *a, char *b, char *c)
{
    int aLen = strlen(a);
    int bLen = strlen(b);
    int cLen = strlen(c);
    char *combined = (char *)malloc((aLen + bLen + 1) * sizeof(char));
    char *cCopy = (char *)malloc((cLen + 1) * sizeof(char));

    if (aLen + bLen != cLen)
    {
        free(combined);
        free(cCopy);
        return 0;
    }

    strcpy(combined, a);
    strcat(combined, b);

    strcpy(cCopy, c);

    qsort(combined, aLen + bLen, sizeof(char), charCompare);
    qsort(cCopy, cLen, sizeof(char), charCompare);

    int result = strcmp(combined, cCopy);

    free(combined);
    free(cCopy);

    return result == 0;
}

int main()
{
    char guest[101], host[101], letters[101];
    scanf("%100s %100s %100s", guest, host, letters);

    if (permutable(guest, host, letters))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
