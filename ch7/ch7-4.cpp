/*
Many state lotteries use a variation of the simple lottery portrayed by 
Listing 7.4. In these variations you choose several numbers from one set 
and call them the field numbers. For example, you might select five numbers 
from the field of 1–47).You also pick a single number (called a mega number 
or a power ball, etc.) from a second range, such as 1–27.To win the grand prize
, you have to guess all the picks correctly.The chance of winning is the 
product of the probability of picking all the field numbers times the 
probability of picking the mega number. For instance, the*/

#include <iostream>
using namespace std;
double pro (int,int,int);
int main(){
  int total, choice, mega;
  cout << "Enter the number in the field, picks allowed and maga number:";
  cin >> total >> choice >> mega;
  double res;
  res = pro(total, choice, mega);
  cout << "You have one chance in " << pro << " of winning.\n";
  return 0;
}

double pro (int total, int choice, int mega){
  double result;
  for (;choice > 0; choice--, total--)
    result *= total/choice;
  result *= mega;
  return result;
}
