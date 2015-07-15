#include <iostream>
#include <string>
using namespace std;
struct pizza
{
    std::string name;
    double diameter;
    double weight;
};

int main()
{
    pizza p1;
    cout << "Enter the name of the pizza: ";
    getline(cin, p1.name);
    cout << "Enter the diameter of the pizza: ";
    cin >> p1.diameter;
    cout << "Enter the weight of the pizza: ";
    cin >> p1.weight;

    cout << "Allright!\nName: " << p1.name << endl;
    cout << "Diameter: " << p1.diameter << endl;
    cout << "Weight: " << p1.weight << endl;
}
