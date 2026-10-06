#include <stdio.h>

int add(int, int);       // Function declaration

int main()
{
    int result;

    result = add(10, 20);    // Function call

    printf("Sum = %d", result);

    return 0;
}

int add(int a, int b)       // Function definition
{
    return a + b;
}


