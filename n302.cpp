#include <iostream>
using namespace std;
int main()
{
    double A, B, X, Y, Z;
    cout << "Enter the size of the gap: ";
    cin >> A >> B;
    cout << "Enter the size of the brick: ";
    cin >> X >> Y >> Z;
    if ((A >= X) && (B >=Y))
    {
       cout << "The brick's able go through the gap" << endl;
    }
    else if ((A >= Y) && (B >=X))
    {
        cout << "The brick's able go through the gap" << endl;
    }
    else if ((A >= Y) && (B >=Z))
    {
        cout << "The brick's able go through the gap" << endl;
    }
    else if ((A >= X) && (B >=Z))
    {
        cout << "The brick's able go through the gap" << endl;
    }
    else if ((A >= Y) && (B >=Z))
    {
        cout << "The brick's able go through the gap" << endl;
    }
    else if ((A >= Z) && (B >=X))
    {
        cout << "The brick's able go through the gap" << endl;
    }
    else
    {
        cout << "The brick is not able through the gap" << endl;
    }
    
}