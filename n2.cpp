#include <iostream>
using namespace std;
int main()
{
    double a, b, c;
    cout << "Enter the sides of your triangle: ";
    cin >> a >> b >> c;
    if (a == b)
    {
        cout << "Your triangle is isosceles: " << endl;
    }
    else if (b == c)
    {
        cout << "Your triangle is isosceles: " << endl;
    }
    else if (a == c)
    {
        cout << "Your triangle is isosceles: " << endl;
    }
    else
    {
        cout << "Your triangle is not isosceles: " << endl;
    }
}