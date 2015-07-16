/*
Write a program that asks the user to type in numbers.After each entry, the pro-
gram should report the cumulative sum of the entries to date.The program should
terminate when the user enters 0 .
*/
#include <iostream>

int main()
{
  std::cout << "Enter number; enter 0 to qiut: ";
  double num;
  double sum;
  std::cin >> num;
  std::cout << num << std::endl;
  while (num != 0.0)
    {
      std::cin >> num;
      sum += num;
      std::cout << sum << std::endl;
    }
  return 0;
}
