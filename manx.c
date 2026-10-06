#include <stdio.h>

int square(int num){
    int result = num * num ;

    return result;

}
int main() { 
    
    int x = square(2);
    int y = square(3);

    printf("%d\n", x);
    printf("%d\n", y);

    return 0;
}