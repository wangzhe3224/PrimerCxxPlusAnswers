#include <iostream>
using namespace std;
void printmenu();
int main()
{
  printmenu();
  char ch;
  cin >> ch;
  while (ch != 'q'){
    switch(ch){
    case 'c':cout << "This is a carnivore..."<< endl;break;// do not drop breal..
    case 'p':cout << "Listen this song..." << endl;break;
    case 't':cout << "This is a tree..." << endl;break;
    case 'g':cout << "Let's have some fan.." << endl;break;
    defanlt: cout << "Try sonmthing in the menu?" << endl;break;
    }
    printmenu();
    cin >> ch;
  }
  cout << "Bye!\n";
  return 0;
}

void printmenu(){
  cout << "Please enter one of the following choices:\n"
    "c) carnivore      p) pianist\n"
    "t) tree           g) gam\n";
}
