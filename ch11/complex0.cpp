#include "complex0.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
// operator reloading
Complex Complex::operator*(const Complex & b) const {
  return Complex(real_*b.real_ - imag_*b.imag_, real_*b.imag_+imag_*b.real_);
}

Complex Complex::operator+(const Complex & b) const {
  return Complex(real_+b.real_, imag_+b.imag_);
}

Complex Complex::operator-(const Complex & b) const {
  return Complex(real_-b.real_, imag_-b.imag_);
}

Complex operator*(double n, const Complex & b) {
  return Complex(b.real_*n,b.imag_*n);
}

Complex Complex::operator~() const {
  return Complex(real_, -1*imag_);
}

// friend
std::ostream & operator<<(std::ostream & os, const Complex & v) {
  os << "(" << v.real_ << "," << v.imag_ << "i)";
  return os;
}

std::istream & operator>>(std::istream & is, Complex & v) {
  cout << "real:";
  if (cin >> v.real_) {
    cout << endl;
    cout << "imag:";
    cin >> v.imag_;
  }
  else
    return is;
  return is;
}
