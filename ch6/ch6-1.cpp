#include <iostream>
#include <cctype>
using namespace std;
int main()
{
  cout << "Enter something: " << endl;
  char ch;
  cin >> ch;
  while (ch != '@'){
    if (isdigit(ch))
      cout << " " << endl;
    else if (isupper(ch)){
      ch = tolower(ch);      //must do this...if use this expression
      // after the operator << , only number will be displayed!!
      // see nest elseif for example....
      cout << ch << endl;
    }
    else if (islower(ch))
      cout << toupper(ch) << endl;
    else
      cout << "Something wrong.....";
    cin >> ch;
    }
  return 0;
}
