#include <stdio.h>

int main()
{

    int n, o, l;
    int r = 0;

    printf("Enter a number\n");
    scanf("%d", &n);

    o = n;
    while (n != 0)
    {
        l = n % 10;
        r = r + l * l * l;
        n = n / 10;
    }
    if (r == o)
    {
        printf("Armstrong");
    }

    else
        printf("Meow");
    return 0;
}