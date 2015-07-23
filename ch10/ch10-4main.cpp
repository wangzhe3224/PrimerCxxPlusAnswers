#include <iostream>
#include "ch10-4.h"
using namespace std;
using namespace SALES;

int main() {
  double ar[] = {1,2,3,4};
  Sales s1(ar,4);
  s1.show();
  s1.setSales();
  s1.show();
  return 0;
}
