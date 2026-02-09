#include <iostream>
#include <math.h>
//#include <cmath>

using namespace std;

int main()
{
    cout << "Task 1" << endl;
    int x, y;
    cout << "input x: ";
    cin >> x;
    cout << "input y: ";
    cin >> y;
    double z = pow((x + y), 2) / pow((x + y), 3);
    cout << "z = " << z << endl;

    cout << "Task 2" << endl;
    cout << "input x: ";
    cin >> x;
    double y2;
    int a = 5;
    if (x < 2) y2 = (6 - pow(x, 2)) / 3;
    else if ((x >= 2) && (x < 4)) y2 = (a * pow(exp(1.0), x)) / (3 + pow((4 * x), 6));
    else y2 = cbrt(6 * pow(x, 3) - 4 * x);
    cout << "y = " << y2;
}
