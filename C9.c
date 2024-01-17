#include <stdio.h>
long long int factorial(int n)
{
    if (n < 0 || n > 20)
    {
        return 0;
    }
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        long long int result = 1;
        for (int i = 2; i <= n; i++)
        {
            result *= i;
        }
        return result;
    }
}
int main()
{
    int n;
    printf("enter a positive number from 0 to 20 inclusive:\n");
    scanf("%d", &n);

    if (n < 0 || n > 20)
    {
        printf("Error: Invalid number entered!\n");
        return 0;
    }
    long long int fact = factorial(n);
    printf("%lld\n",fact);
    return 0;
}
