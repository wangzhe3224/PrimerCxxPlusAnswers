#include "ch10-2.h"
#include <iostream>
using namespace std;

int main() {
  Person one;
  Person two ("wang","zhe");
  one.Show();
  two.Show();
  two.FormalShow();
}
