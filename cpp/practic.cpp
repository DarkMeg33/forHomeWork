#include <iostream>

int doubleNumber(int a) {

   a *= 2; 

   return a;
}



int main() {
   
   int x;

   std::cin >> x;

   std::cout << doubleNumber(x);

   return 0;
}