#include <stdio.h>

main ()
{ 
    int a=15, b=10, c, d;
    if ((c=a-5)&&(d=b-10))
    {
        puts("TRUE");
    }
    else
    {
        puts("FALSE");
    }
    printf("c=%d, d=%d\n", c, d);
    };
