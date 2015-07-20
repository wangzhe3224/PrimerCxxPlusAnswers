/*
Define a recursive function that takes an integer argument and returns the 
factorial of that argument. Recall that 3 factorial, written 3!, equals 3 × 2!
, and so on, with 0! defined as 1. In general, if n is greater than zero, 
n! = n * (n - 1)!.Test your function in a program that uses a loop to allow 
the user to enter various values for which the program reports the factorial.
 */
#include <iostream>
double  fa(int n);
int main(){
  using namespace std;
  cout << "Enter the number of n:";
  int n;
  cin >> n;
  double result;
  result = fa(n);
  cout << n << "! = " << result << endl;
  return 0;
}

double fa (int n){
  double res;
  if (n == 0)
    res = 1;
  else {
    res = n*fa(n-1);
  }
  return res;
}
