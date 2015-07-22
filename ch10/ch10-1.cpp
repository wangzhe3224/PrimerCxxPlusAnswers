#include "ch10-1.h"
#include <iostream>
Account::Account()
{
  name = "DefaultName";
  num = "000000";
  balance = 0.0;
}

Account::Account(const std::string & na, const std::string & nu, double bal)
{
  name = na;
  num = nu;
  balance = bal;
  if (balance < 0){
    std::cout << "Balance can't be negetive...\n"
	      << "Balance = 0 now..\n";
    balance = 0;
  }
}

Account::~Account()
{
  // do nothing ..... for the destructor..
}

void Account::show() const
{
  std::cout << "Here is the account state:\n"
	    << "----Account name:" << name << "\n"
	    << "----Account number:" << num << "\n"
	    << "----Money:" << balance << std::endl;
}

void Account::deposite(double cash)
{
  balance += cash;
}

void Account::withdraw(double cash)
{
  balance -= cash;
  if (balance <= 0.001){
    std::cout << "You don't have much to withdraw../n"
	      << "Balance = 0 now.." << std::endl;
    balance = 0.0;
  }
}
