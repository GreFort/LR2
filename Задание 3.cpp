#include <iostream>
using namespace std;
void Task1(), Task2();
void main()
{
    int count;
    cout << "Main Menu" << endl 
        << "[1] Task 1" << endl
        << "[2] Task 2" << endl
        << "Choose task number = ";
    cin >> count;
    switch (count)
    {
    case 1: return Task1();
    case 2: return Task2();
    }
}
