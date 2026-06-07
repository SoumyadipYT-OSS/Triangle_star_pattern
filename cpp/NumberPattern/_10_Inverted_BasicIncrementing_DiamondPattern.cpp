/*
    3
    44
    555
    6666
    555
    44
    3
*/

#include<iostream>
using namespace std;

int main() 
{
    int n = 4;
    int initializeVal = 3;

    for (int i=0; i<2*n-1; i++) 
    {
        int horizontal_width = (i<n) ? (i+1): ((2*n-1)-i);
        
        for (int j=0; j<horizontal_width; j++) 
        {
            cout << initializeVal;
        }

        if (i<n)
            initializeVal++;
        else
            initializeVal--;
        cout << endl;
    }

    return 0;
}