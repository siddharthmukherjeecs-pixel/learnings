#include <stdio.h>
int main() {
    
int digit , sum = 0 , backup, n;
printf("Enter a number \n");
scanf("%d", &n);

 backup = n;

    while( n!=0){
      digit = n%10;

    sum = sum + digit*digit*digit;
      n= n/10;
    }

    printf("%d", sum);
if (backup == sum)
    printf(" armstrong");

else
    printf("meow");

    return 0;
}
