#ifndef COMPLEX0_H_
#define COMPLEX0_H_
#include <iostream>
class Complex {
 private:
  double real_;
  double imag_;
 public:
  Complex() {real_ = imag_ = 0.0;};
  Complex(double real, double imag) {real_ = real; imag_ = imag;};
  // operator overloading
  Complex operator*(const Complex & b) const;
  Complex operator+(const Complex & b) const;
  Complex operator-(const Complex & b) const;
  Complex operator~() const;
  friend Complex operator*(double n, const Complex & b);
  // << and >>
  friend std::ostream & operator<<(std::ostream & os, const Complex & v);
  friend std::istream & operator>>(std::istream & is, Complex & v);
};
#endif

