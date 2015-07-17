#include <iostream>

//bool larger(num1,num2);

int main()
{
  using namespace std;
  float a[10];
  char temp;  // isdigit() is useful in char not in numbers like float..
  for (int i=0;i<10;++i){
    a[i] = 0.0;
  }
  cout << "Enter 10 numbers or enter non-numeric character to qiut: " << endl;
  int counter = 0;
  cin >> temp;

  while (isdigit(temp) && (counter<10)){
    a[counter] = temp1;
    cin >> temp;
    counter += 1;
    //cout << isdigit(temp);
  }
  cout << "There are " << counter << " number" << endl;
  double ave = 0.0;
  for (int i=0;i<counter;++i){
    ave = ave + a[i];
    cout << ave << ", ";
  }
  ave = ave/counter;
  cout << "The average is " << ave << "." << endl;
  int counter2 = 0;
  for (int i=0;i<counter;++i){
    if (a[i]>ave){
      counter2 += 1;
    }
  }
  cout << "there are " << counter2 << " elements larger than average." << endl;
  
  return 0;
}
