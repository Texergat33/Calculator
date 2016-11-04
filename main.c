#include <stdio.h>
#include <stdlib.h>
int soustraction(int a, int b)
{
    return a - b;
}

int addition(int a, int b)
{
    return a + b;
}
int division(int a, int b)
{
    if (b == 0)
    {
        printf("impossible");
    }
    return a / b;
}
int main()
{
    printf("a + b = %d\n", addition(1,4));
    printf("a - b = %d\n", soustraction(1,4));
    printf("a / b = %d\n", division(1,4));

    return 0;
}
