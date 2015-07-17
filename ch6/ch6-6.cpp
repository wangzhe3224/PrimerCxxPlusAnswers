#include <iostream>
#include <string>
using namespace std;

struct contri {
  string name;
  double money;
};

int main(){
  int n; // this is the number of contributors
  cout << "Enter the number of contributors: ";
  cin >> n;
  contri* pt = new contri[n];

  for(int i=0;i<n;++i){
    cout << "Enter the name of the " << i+1 << "contributor:";
    cin.get();
    getline(cin, pt[i].name);
    cout << "Enter the contribution of the " << i+1 << "contributor:";
    cin >> pt[i].money;
  }
  cout << "Grand Patrons:" << endl;
  for (int i=0;i<n;++i){
    if (pt[i].money >= 10000){
      cout << pt[i].name << " " << pt[i].money << endl;
    }
  }
  cout << "Patrons:" << endl;
  for (int i=0; i<n; i++) {
    if (pt[i].money < 10000) {
      cout << pt[i].name << " " << pt[i].money << endl;
    }
  }  
  delete [] pt;
  return 0;
}
