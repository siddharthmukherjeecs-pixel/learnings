#include <stdio.h>
int main() {
    int m;
printf("Enter the year\n");
scanf("%d",&m);

if (m%400==0 || m%4 ==0 && m%100 != 0)
    printf("it is a leap year\n");
else 
    printf("it is not a leap year\n");

    return 0;
}