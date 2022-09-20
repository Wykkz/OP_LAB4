#include <iostream>
using namespace std;
int main()
{
    int N;
    cout << "Enter your 3-digit number: ";
    cin >> N;
    int M = (N / 100) + (N / 10 % 10) + (N % 10);
    if (M % 2 == 0)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}