#include <stdio.h>
int main() {
    
    int age = 26;
    printf("%p\n", &age);
    int *pAge = &age;
    printf("%p",pAge);
    return 0;
}