#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter your numbers: ";
    cin >> m >> n;
    if (m == n)
    {
        m = 0;
        n = 0;
        cout << m << n << endl;
    }
    else if (m > n)
    {
        n = m;
        cout << m << n << endl;
    }
    else
    {
        m = n;
        cout << m << n << endl;
    }
}