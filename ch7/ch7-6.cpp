/*
Write a program that uses the following functions:
Fill_array() takes as arguments the name of an array of double values and an
array size. It prompts the user to enter double values to be entered in the array. It
ceases taking input when the array is full or when the user enters non-numeric
input, and it returns the actual number of entries.
Show_array() takes as arguments the name of an array of double values and an
array size and displays the contents of the array.
Reverse_array() takes as arguments the name of an array of double values and an
array size and reverses the order of the values stored in the array.
The program should use these functions to fill an array, show the array, reverse the
array, show the array, reverse all but the first and last elements of the array, and then
show the array.
 */
#include <iostream>
using namespace std;
int fill_array(double arr[], int size);
void show_array(const double arr[], int size);
void reverse_array(double arr[], int size);

int main() {
  cout << "Enput the size of array:";
  int size;
  int count;
  cin >> size;
  double arr[size];
  count = fill_array(arr,size);
  reverse_array(arr,size);
  show_array(arr,size);
  //cout << count << endl;
  return 0;
}

int fill_array(double arr[], int size){
  cout << "Enter numbers or q to exit:" << endl;
  int i = 0;
  for (;i<size;++i){
    if (cin >> arr[i])
      continue;
    else
      cout << "Non-numeric input, terminate...";
      break;
  }
  return i; 
}

void reverse_array(double arr[], int size){
  double temp;
  for (int i=0;i<=size/2;++i){ ////...
    temp = arr[i];
    arr[i] = arr[size-i-1];
    arr[size-i-1] = temp;
  }
}

void show_array(const double arr[], int size){
  for (int i=0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}
