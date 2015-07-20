/*
Here is a structure declaration:
struct box
{
char maker[40];
float height;
float width;
float length;
float volume;
};
a. Write a function that passes a box structure by value and that displays the
value of each member.
b. Write a function that passes the address of a box structure and that sets the
volume member to the product of the other three dimensions.
c. Write a simple program that uses these two functions.
 */
#include <iostream>
using namespace std;
struct box {
char maker[40];
float height;
float width;
float length;
float volume;
};
void adisp (const box box);
void setvalue (box * pt);

int main() {
  box box1 = {"wangzhe",1,2,3,4};
  setvalue(&box1);
  adisp(box1);
  return 0;
}

void adisp (const box box){
  cout << "The maker is " << box.maker << endl;
  cout << "Height: " << box.height << endl;
  cout << "Width: " << box.width << endl;
  cout << "Lenght: " << box.length << endl;
  cout << "Volume: " << box.volume << endl;
}

void setvalue (box * pt){
  pt -> height = pt -> volume;
  pt -> width = pt -> volume;
  pt -> length = pt -> volume;
}
