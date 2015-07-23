#include "ch10-2.h"
#include <cstring>
#include <iostream>

Person::Person(const string & ln, const char * fn /*= "Heyyou"*/){
  lname = ln;
  strcpy(fname, fn); // c-style string....is awkward...
}

void Person::Show() const {
  std::cout << fname << " " << lname << std::endl;
}

void Person::FormalShow() const {
  std::cout << lname << ", " << fname << std::endl;
}
