#include <iostream>
int main(){
   int a = 10;
   int b = 20;

 std::cout << a << "\n";
 std::cout << b << "\n";

 int c;
 c=b;
 b=a;
 a=c;
 std::cout << a << "\n";
 std::cout << b;
 return 0;
}