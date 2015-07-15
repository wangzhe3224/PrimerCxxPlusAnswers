#include <iostream>
#include <string>

int main()
{
    using namespace std;

    cout << "Enter your first name:";
    string firstname;
    getline(cin, firstname);
    cout << "Enter your second name: ";
    string lastname;
    getline(cin, lastname);

    string name;
    name = name + lastname;
    name += ",";
    name += firstname;

    cout << "Here's the information in a string:"
	 << name << "\n";

    return 0;
}
