#include <stdio.h>
int main() {
    int i;
    int mains[]= {10,20,30,40,50,60};
    char grades[] = {'A','B','C','D','E','F'};
    char name[] = "meow meow";

    printf("%d",mains[1]);

    for (i=0 ;i<6 ;i++){
        printf("%d ", mains[i]);
    }
    return 0;
}