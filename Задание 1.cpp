#include <iostream>
using namespace std;
bool IsInArea(double x, double y);
void main()
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