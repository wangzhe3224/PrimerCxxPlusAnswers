#include "complex0.h"
#include <iostream>
using namespace std;

int main() {
  Complex a(3.0, 4.0);// initialize to (3,4i)
  Complex c;
  cout << "Enter a complex number (q to quit):" << endl;
  while (cin >> c) {
    cout << "c is " << c << endl;
    cout << "complex conjugate is" << ~c << endl;
    cout << "a is " << a << endl;
    cout << "a + c is " << a + c << endl;
    cout << "a - c is " << a - c << endl;
    cout << "a * c is " << a * c << endl;
    cout << "3 * c is " << 3 * c << endl;
    cout << "Enter a complex number (q to quit):"<< endl;
  }
  cout << "Done!" << endl;
  return 0;
}
