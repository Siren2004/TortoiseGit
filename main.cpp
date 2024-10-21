   #include "sdt.h"
   #include <iostream>

   int main() {
       setlocale(LC_ALL, "");
       int num1, num2;

       std::cout << "¬ведите первое целое число: ";
       std::cin >> num1;
       std::cout << "¬ведите второе целое число: ";
       std::cin >> num2;

       int sum = num1 + num2;
       std::cout << "—умма: " << sum << std::endl;
       return 0;
   }
