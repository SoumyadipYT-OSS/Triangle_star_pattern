/*
    3
    44
    555
    6666
*/

#include<iostream>
using namespace std;

int main() 
{
    int n = 4;
    int digit = n-1;

    for (int i=0; i<n; i++) 
    {
        for (int j=0; j<=i; j++) 
        {
            cout << digit;
        }

        digit++;
        cout << endl;
    }

    return 0;
}