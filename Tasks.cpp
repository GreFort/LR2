#include <iostream>
using namespace std;
bool IsInArea(double x, double y);
double f(double x);
void Task1()
{
    double x, y;
    cout << "Enter x = ";
    cin >> x;
    cout << "Enter y = ";
    cin >> y;
    if (IsInArea(x, y) == 0) cout << "False";
    else cout << "True";
}
bool IsInArea(double x, double y)
{
    if (x * x + y * y > 1 || (x < 0 && y < 0)) return 0;
    else return 1;
}
void Task2()
{
    double x;
    cout << "Enter x = ";
    cin >> x;
    cout << "Function = " << f(x);
}
double f(double x)
{
    if (x <= 3) return x * x - 3 * x + 9;
    else return 1 / (x * x * x + 6);
}