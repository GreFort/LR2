#include <iostream>
using namespace std;
double f(double x);
int main()
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
