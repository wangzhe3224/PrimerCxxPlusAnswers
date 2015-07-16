#include <iostream>

int main()
{
  using namespace std;
  cout << "Enter two integers: ";
  int num1;
  int num2;
  cin >> num1;
  cin >> num2;

  int sum;
  for (int i = num1; i <= num2; ++i) // mistake here:do NOT add a semicolon
  {
    sum = sum + i;
  };
  cout << "The sum is " << sum << endl;
	   
  return 0;
}
