   #include "sdt.h"
   #include <iostream>

   int main() {
       setlocale(LC_ALL, "");
       int num1, num2;

       std::cout << "������� ������ ����� �����: ";
       std::cin >> num1;
       std::cout << "������� ������ ����� �����: ";
       std::cin >> num2;

       int sum = num1 + num2;
       std::cout << "�����: " << sum << std::endl;
       return 0;
   }
