/*
the answer of chapter review ch7-4 
 */

#include <iostream>
using namespace std;
void arr(int * begin, int * end, int value);
int main()
{
  cout << " " << endl ;
  return 0;
}

void arr(int * begin, int * end, int value){
  for (int * pt = begin; pt != end; pt++)
   *pt = value; // The original answer is "pt*" which is not right.
}
