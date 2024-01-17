#include <stdio.h>
int nod(int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    return a;
}
int main()
{
    int num1, num2;
    printf("enter two positive numbers ");
    scanf("%d %d", &num1, &num2);
    printf("%d\n",nod(num1, num2));
    return 0;
}
