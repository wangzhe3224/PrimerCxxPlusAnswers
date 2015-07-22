#ifndef CH10_1_H_
#define CH10_1_H_
#include <string>

class Account
{
 private:
  std::string name;
  std::string num;
  double balance;
 public:
  Account(const std::string & client, const std::string & num, double bal = 0);
  Account();
  ~Account();
  void show() const;
  void deposite(double cash);
  void withdraw(double cash);
};
#endif
