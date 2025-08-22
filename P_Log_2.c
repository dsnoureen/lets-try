#include <stdio.h>
int printLn(int n)
{
    int count = 0;
    if (n == 1)
    {
        return 0;
    }
    return 1+printLn(n / 2);
}

int main()
{
    int n;
    scanf("%d", &n);
    int m = printLn(n);
    printf("%d", m);
    return 0;
}