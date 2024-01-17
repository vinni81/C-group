#include <stdio.h>
unsigned long long quantity(int n) {
    unsigned long long corns = 1;
    int i;
    for (i = 1; i < n; i++)
    {
        corns *= 2;
    }
    return corns;
}
int main()
{
    int n;
    printf("enter number of cell (from 1 upto 64): ");
    scanf("%d", &n);
    printf("%llu\n", quantity(n));
    return 0;
}
