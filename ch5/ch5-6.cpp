#include <iostream>
#include <string>

using namespace std;

int main()
{
  int sales[3][12];
  std::string months[12] =
    {
      "JAN","FEB","MAR","APR",
      "MAY","JUN","JUL","AGU",
      "SEP","OCT","NOV","DEC"
    };
  int sum[3] = {0,0,0}; // A big mistake here
  // if one dosen't assign a initial value to the array sum[3]
  // sum[i] += sales[i][j]; will have something wrong..
  // that is c++ will give a random value to each sum[i]...

  for (int i = 0; i < 3;i++)
    {
      for (int j = 0; j < 12;j++)
	{
	  cout << "Enter book sales in month " <<
	    months[j] << ", of year: " << i+1 << ": ";
	  cin >> sales[i][j];
	  sum[i] += sales[i][j];
	}
    }

  int total = 0;
  for (int i = 0; i < 3; i++)
    {
      cout << "Total sales of year " << i+1 <<
	" is " << sum[i] << ".\n";
      total += sum[i];
    }

  cout << "Total sales of all 3 years is: " <<
    total << ".\n";

  return 0;
}
