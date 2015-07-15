#include <iostream>
#include <string>
using namespace std;

struct CandyBar {
  string brand;
  double weight;
  int number;
};

int main()
{
  CandyBar * cb = new CandyBar [3]; // dynamic binding

  cb[0].brand = "AAA";
  cb[0].weight = 2.1;
  cb[0].number = 1;

  cb[1].brand = "BBB";
  cb[1].weight = 2.2;
  cb[1].number = 2;

  cb[2].brand = "CCC";
  cb[2].weight = 2.5;
  cb[2].number = 3;

  cout << "Name1: " << cb[0].brand << endl;
  cout << "#########weitht: " << cb[0].weight << endl;
  cout << "#########number: " << cb[0].number << endl;

  delete [] cb; // free the memory when finished.
  return 0;
}
