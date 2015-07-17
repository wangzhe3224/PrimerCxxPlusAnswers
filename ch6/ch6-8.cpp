#include <iostream>
#include <fstream>

using namespace std;

int main(){
  ifstream file;
  file.open("ch6-1.cpp");
  char ch;
  int counter;
  do{
    file >> ch;
    counter += 1;
    //cout << ch;
  }while(!file.eof());

  cout << "the number of characters is " << counter << endl;
  file.close();
  return 0;
}
