#include <iostream>
using namespace std;
int main()
{
    char b;
    double a, c, N;
    cout << "Enter your mathematical expression: ";
    cin >> a >> b >> c;
    if (b == '+')
    {
        N = a + c;
    }
    else if (b == '-')
    {
        N = a - c;
    }
    else if (b == '*')
    {
        N = a * c;
    }
    else if (b == '/')
    {
        N = a / c;
    }
    
    cout << "Result: " << N << endl;
}