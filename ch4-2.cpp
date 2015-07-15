#include <iostream>
#include <cstring>
int main()
{
  using namespace std;
  cout << "What is you name?";
  const int size = 20;
  char firstname[size];
  cin.getline(firstname, size); // what is the point?
  cout << "Enter your last name";
  char lastname[size];
  cin.getline(lastname, size);

  char name[2*size+2];
  strcpy(name,lastname);
  strcat(name, ".");
  strcat(name, firstname);

  cout << "Here is the information in single string: "
       << name << endl;
  return 0;
}
