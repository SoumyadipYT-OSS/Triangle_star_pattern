#include<iostream>
using namespace std;

int main() 
{
    int n = 4;
    int digit = 3;
    int incrementDigit = 1;

    for (int r=0; r<n; r++) 
    {
        if (r == 0 || r == n-1)
            cout << digit << digit << digit;
        else
        {
            cout << digit << incrementDigit << digit;
            incrementDigit++;
        }

        cout << endl;
    }

    cout << endl;
    
    return 0;
}