/*
Write a program that repeatedly asks the user to enter pairs of numbers until a
least one of the pair is 0. For each pair, the program should use a function to 
calculate the har- monic mean of the numbers. The function should return the 
answer to main(), which should report the result. The harmonic mean of the 
numbers is the inverse of the aver- age of the inverses and can be calculated 
as follows:
harmonic mean = 2.0 × x × y / (x + y)
*/
#include <iostream>
using namespace std;
double harmonic (double mun1, double num2);
int main() {
  cout << "Please enter a pair of numbers: ";
  double num1;
  double num2;
  while(cin >> num1 >> num2){
    if (num1 == 0.0 || num2 == 0.0)
      break;
    else {
      double result = harmonic(num1,num2);
      cout << "The harmonic mean = " << result << endl;
      cout << "Enter again: ";
    }
  }
  return 0;
}

double harmonic (double num1, double num2){
  double result = 0.0;
  result = 2.0*num1*num2/(num1+num2);
  return result;
}
