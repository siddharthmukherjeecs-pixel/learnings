/* Print a triangle of stars */

#include <stdio.h>

#define STAR '*'
#define TRIANGLE_BASE_SIZE 10 // 63 is the number of stars my screen can accomodate to be able to view the entire triangle on 1 run.

int main() {
    int num_spaces = 1;

    for(int i = 1 ; i <= TRIANGLE_BASE_SIZE ; i += 2) {
        num_spaces = (TRIANGLE_BASE_SIZE - i) / 2;
        for(int k = 1 ; k <= num_spaces ; k++) {
            printf(" ");
        }
        for(int j = 1 ; j <= i ; j++) {
            printf("%c", STAR);
        }
        printf("\n");
    }

    return 0;
}
