///Redo Listing 5.4 using a type array object instead of
///a built-in array and type long double instead of long
///long . Find the value of 100!
///
#include <iostream>
#include <array>
int main()
{
  std::array<long double, 16> factorials;
  factorials[0] = factorials[1] = 1.000L; // do NOT use 0.1 instead of 0.1L
  for (int i = 2; i <= 100; ++i)
    {
      factorials[i] = i * factorials[i-1];
    }
  for (int i = 0; i <= 100; ++i)
    std::cout << i << "! = " << factorials[i] << std::endl;
  return 0;
}
       
