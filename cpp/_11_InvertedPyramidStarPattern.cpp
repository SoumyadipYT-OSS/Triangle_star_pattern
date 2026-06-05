#include<iostream>
using namespace std;

int main() 
{
    int n = 4;

    for (int i=0; i<n; i++) 
    {
        for (int j=0; j<n; j++) 
        {
            if (j < i)
                cout << " ";
            else 
                cout << "*";
        }
        for (int j=n-i-1; j>0; j--) 
        {
            cout << "*";
        }
        
        cout << endl;
    }

    cout << endl << endl;


    // Another solution
    /*
    for (int i = 0; i < n; i++) // Outer loop for rows
    {
        // Loop for leading spaces
        for (int j = 0; j < i; j++) 
        {
            cout << " ";
        }

        // Loop for stars
        for (int k = 0; k < (2 * (n - i) - 1); k++) 
        {
            cout << "*";
        }
        
        cout << endl; // Move to the next line
    }
    */

    return 0;
}