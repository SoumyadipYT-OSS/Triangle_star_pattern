/*
    3
    4 5
    6 7 8
    9 10 11 12
*/

#include<iostream>
using namespace std;

int main() 
{
    int n = 4;
    int initialize_digit = 3;

    for (int i=0; i<n; i++) 
    {
        for (int j=0; j<=i; j++) 
        {
            cout << initialize_digit << " ";
            initialize_digit++;
        }

        cout << endl;
    }

    return 0;
}