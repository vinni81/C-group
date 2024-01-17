#include <stdio.h>
int increase(int n)
{
    int prevdigit = n % 10;
    n /= 10;
    while (n > 0)
    {
        int currdigit = n % 10;
        if (currdigit >= prevdigit)
        {
            return 0;
        }
        prevdigit = currdigit;
        n /= 10;
    }
    return 1;
}
int main()
{
    int number;
    printf("enter numbers ");
    scanf("%d", &number);

    if (increase(number))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}

