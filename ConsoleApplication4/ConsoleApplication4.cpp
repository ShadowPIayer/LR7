
#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    float z, b, y;
    cout << "Input b" << endl;
    cin >> x;
    cout << "Input Y" << endl;
    cin >> y;
    z = 1;
    for (int k = 1; k < 6; k++)
    {
        y *= log(k*y);
    }
    z = pow(y,5)+y;
    cout << "Z=" << fixed << setprecision(2) << z;
}
