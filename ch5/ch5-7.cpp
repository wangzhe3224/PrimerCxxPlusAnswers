/*
Design a structure called car that holds the following information about an auto-
mobile: its make, as a string in a character array or in a string object, and the year
it was built, as an integer.Write a program that asks the user how many cars to cata-
log.The program should then use new to create a dynamic array of that many car
structures. Next, it should prompt the user to input the make (which might consist
of more than one word) and year information for each structure.
 */
#include <iostream>
#include <string>

struct car
{
  std::string name;
  int year;
};
  
int main()
{
  std::cout << "Number of catalog: ";
  int num;
  std::cin >> num;
  car* pt = new car [num];
  /// Here pt is a pointer to a array of structure car.
  /// So that pt can be used as a array name!
  /// array name can be used as an address..
  /// that's why pt[0] represents the first structure.

  for (int i=0;i<num;++i)
    {
      std::cout << "Car #" << i+1 << ":\n";
      std::cout << "Please enter the make: ";
      //std::cout << std::endl;
      std::cin.get(); //a mistake: drop the enter character
      getline(std::cin, pt[i].name);
      std::cout << "Please enter the year: ";
      std::cin >> pt[i].year;
    }

  std::cout << "Here is your collection:\n";

  for (int i=0;i<num;++i)
    {
      std::cout << pt[i].year << " " << pt[i].name << std::endl;
    };
  
  delete [] pt;
  return 0; 
}
