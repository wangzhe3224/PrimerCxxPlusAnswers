/// chapter 6 ex 4
#include <iostream>

using namespace std;
const int strsize = 20;
const int size = 3;
struct bop {
  char fullname[strsize];
  char title[strsize];
  char bopname[strsize];
  int preference;         //0 = fullname, 1 = title, 2 = bopname
};

void showmenu();
void showcontent(char ch,int size,bop arr[]);
void showpref(bop arr[],int i);

int main()
{

  bop arr[size] = {
    {"Aaa A","Mr.","AA",0},
    {"Bbb B","Mrs.","BB",1},
    {"Ccc C","Dr.","CC",2},
  };
  
  showmenu();
  char ch;
  cin >> ch;

  while (ch != 'q'){
    showcontent(ch, size, arr);
    cout << "Next choice:";
    cin >> ch;
  }

  cout << "Bye!\n";
  return 0;
}

void showmenu(){
  cout << "Benevolent Order of Programmers Report\n"
    "a. display by name        b. display by title\n"
    "c. display by bopname     d. display by preference\n"
    "q. qiut";
  cout << "Enter your choice: ";
};

void showcontent(char ch,int size,bop arr[]){
  for (int i=0;i<size;++i){
    switch (ch){
    case 'a': cout << arr[i].fullname << endl;break;
    case 'b': cout << arr[i].title << endl;break;
    case 'c': cout << arr[i].bopname << endl;break;
    case 'd': showpref(arr,i);break; // no cout here use a function...
    default : cout << "Something out of choice range..." <<endl;
    }
  }
}

void showpref(bop arr[],int i){
  int p = arr[i].preference;
  switch (p){
  case 0 : cout << arr[i].fullname << endl;break;
  case 1 : cout << arr[i].title << endl;break;
  case 2 : cout << arr[i].bopname << endl;break;
  }
}
