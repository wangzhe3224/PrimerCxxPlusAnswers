/*
Write a program that asks the user to enter up to 10 golf scores, 
which are to be stored in an array. You should provide a means for 
the user to terminate input prior to entering 10 scores. 
The program should display all the scores on one line and report the average
score.Handle input, display, and the average calculation 
with three separate array- processing functions.
*/
#include <iostream>
using namespace std;
const int size = 10;
double *input (int size); // return a pointer-to-double
void display (const double *x, int size);
double avg (const double *x, int size);
int main (){
  double *x;
  int count = 0;
  x = input(size);
  display(x,size);
  double result;
  result = avg(x, size);
  cout << "the averge is " << result << endl;
  return 0;
}

double * input(int size){
  double *pt = new double [size]; // an array of pointers?
  //count = 0;
  for (int i=0;i<size;++i){
    cout << "Enter # " << i+1 << " score:";
    cin >> pt[i];
    // if (!cin >> pt[i])
    // break;
    //count++;
  }
  return pt;
}

double avg (const double *x, int size){
  double result = 0.0;
  for (int i=0; i<size; ++i)
    result += x[i];
  return result/size;
}

void display (const double *x, int size){
  for (int i=0;i<size; ++i)
    cout << x[i] << endl;
  cout << endl;
}
