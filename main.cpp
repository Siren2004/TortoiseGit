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

       if (num1 > num2){
        std::cout << "��������:" << num1 - num2<<std::endl;
       } else {
        std::cout << "��������:" << num2 - num1<<std::endl;
       }
       std::cout << "division: " << num1 / num2 << std::endl;
       std::cout << "multiplication: " << num1 * num2 << std::endl;
       return 0;
   }
