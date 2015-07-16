/*
Write a program that matches the description of the program in Programming
Exercise 8, but use a string class object instead of an array. Include the string
header file and use a relational operator to make the comparison test.
 */

#include <iostream>
#include <string>
using namespace std;
int main()
{
  string wd;
  int counter = 0;
  cout << "Enter words,(to stop, type done):" << endl;
  cin >> wd;

  while(wd != "done")
    {
      cin >> wd;
      counter += 1;
    }

  cout << "You entered a total of " << counter << " words.\n";
  return 0;
}
