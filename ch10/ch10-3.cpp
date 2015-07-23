#include "ch10-3.h"
#include <cstring>
#include <iostream>

Golf::Golf(const char* fn, const int h){
  // default arguments only given in the prototype not here !!!!
  strcpy(fullname, fn);
  handicap = h;
}

void Golf::setgolf(){
  using namespace std;
  cout << "Enter full name:" ;
  const int len = this->Len;
  char fn[Len];
  cin.getline(fn,Len);
  cout << "Enter handicap: ";
  int h;
  cin >> h;
  Golf temp(fn,h);
  *this = temp;
}

void Golf::show(){
  using namespace std;
  cout << fullname << endl;
  cout << handicap << endl;
}
