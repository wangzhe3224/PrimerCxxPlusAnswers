/*
You sell the book C++ for Fools.Write a program that has you enter a year’s worth
of monthly sales (in terms of number of books, not of money).The program should
use a loop to prompt you by month, using an array of char * (or an array of
string objects, if you prefer) initialized to the month strings and storing the input
data in an array of int .Then, the program should find the sum of the array con-
tents and report the total sales for the year.
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
  int sales[12];
  std::string months[12] =
    {
      "JAN","FEB","MAR","APR",
      "MAY","JUN","JUL","AGU",
      "SEP","OCT","NOV","DEC"
    };
  int sum = 0;
  for (int i = 0; i <= 12; ++i)
    {
      cout << "The number of book saled in" <<
	months[i] << ":";
      cin >> sales[i];
      sum += sales[i];
    };

  cout << "Total sales of this year is " << sum <<
    "." << endl;

  return 0;
}
