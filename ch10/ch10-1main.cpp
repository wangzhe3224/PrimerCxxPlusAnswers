#include <iostream>
#include "ch10-1.h"
//using namespace std;
int main()
{
  Account account1("wangzhe","asdfg",1260000);
  account1.show();
  account1.deposite(200000);
  account1.show();
  Account account2("wwz","asdfg",-1260000);
  account2.show();
}
