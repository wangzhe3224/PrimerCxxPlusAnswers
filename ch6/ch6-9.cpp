#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Contributor {
  string name;
  double contribution;
};

int main(){
  ifstream file;
  file.open("text.txt");

  int num; // number of contributors
  file >> num;
  Contributor* pt = new Contributor [num];

  for (int i=0;i<num;++i){
    file.get(); // what is the point?
    getline(file, pt[i].name); // getline(Obj,VarName) for string input..
    file >> pt[i].contribution; // >> for char or int or double input..
  }
  cout << "Grand Partrons: " << endl;
  for (int i=0;i<num;++i){
    if (pt[i].contribution >= 10000){
      cout << pt[i].name << "\t" << pt[i].contribution << endl;
    }
  }
  
  return 0;
}
