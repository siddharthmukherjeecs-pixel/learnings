#include <stdio.h>
int main() {
    int i;
    int numbers[]= {10,20,30,40,50,60,70};
    char grades[]= {'A','B','C','D','E','F'};
    char name[] = "Meoww billi";

    printf("%d\n",sizeof(numbers)); 

    printf("%d\n", sizeof(numbers[0]));


int size = sizeof(numbers)/ sizeof(numbers[0]);

    for (i=0; i<size; i++){
    printf("%d ", numbers[i]);
    }


    return 0;
}