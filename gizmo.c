#include <stdio.h>

 int multiplication(int num1, int num2){
    int product;
    product = num1 * num2;
    return product;
 }
 
int main() {
    int product;
  product = multiplication(5,2);
  printf("%d\n", product);

    return 0;
}