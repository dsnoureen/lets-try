#include <stdio.h>
long long int printLn(long long int n)
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
    long long int n;
    scanf("%lld", &n);
    long long int m = printLn(n);
    printf("%lld", m);
    return 0;
}