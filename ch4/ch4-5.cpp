#include <iostream>
#include <string>
using namespace std;

struct CandyBar
{
  string name;
  float weight;
  int number;
};

int main()
{

  CandyBar snack =
    {
      "Mocha Munch",
      2.3,
      350,
    };
  cout << "Name: " << snack.name << endl;
  cout << "Weight: " << snack.weight << endl;
  cout << "number: " << snack.number << endl;
  return 0;
};
