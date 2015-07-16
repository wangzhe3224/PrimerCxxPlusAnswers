/*
Write a program using nested loops that asks the user to enter a value for the
number of rows to display. It should then display that many rows of asterisks, with
one asterisk in the first row, two in the second row, and so on. For each row, the
asterisks are preceded by the number of periods needed to make all the rows
display a total number of characters equal to the number of rows.A sample run
would look like this:
Enter number of rows: 5
....*
...**
..***
.****
*****
 */
#include <iostream>
using namespace std;
int main()
{
  cout << "Enter number of rows: ";
  int row;
  cin >> row;
  for (int i=1;i<=row;++i)
    {
      for (int j=1;j<=row-i;++j) // display "."
      {
	cout << ".";
      }
      for (int a=1;a<=i;a++) // display "*"
      {
	cout << "*";
      }
      cout << endl; // change row. 
    }  
  return 0;
}
