#include <iostream>
using namespace std;

int main()
{
  cout << "Enter your incomes:";
  const int size = 4;
  double rate [size] = {0.0,0.1,0.15,0.2};
  double curr [size] = {5000.,10000.,20000.,35000.};
  double income;
  cin >> income;
  while (income > 0 && (!cin.fail()) ){
    double owe = 0.0;
    double temp = income - rate[size -1];
    double temp2= income - rate[size -2];
    double temp3= income - rate[size -3];
    if (temp > 0){
      for (int i=0;i<size-1;++i){
	owe += rate[i]*curr[i];
      }
      owe += temp*rate[size-1];
    }
    else if (temp2 > 0){
      for (int i=0;i<size-2;++i){
	owe += rate[i]*curr[i];
      }
      owe += temp*rate[size-2];
    }
    else if (temp3 >0){
      for (int i=0;i<size-3;++i){
	owe += rate[i]*curr[i];
      }
      owe += temp*rate[size-3];
    }
    else{
      owe += rate[0]*curr[0];
    }
    cout << "You owe is " << owe << endl;
    cout << "Enter another income: ";
    cin >> income;
  }
  return 0;
}
