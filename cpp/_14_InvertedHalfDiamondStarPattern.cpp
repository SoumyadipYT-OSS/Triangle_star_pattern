#include<iostream>
using namespace std;

int main() 
{
    int n = 7;

    for (int i=0; i<n; i++) 
    {
        int star = (i <= n/2) ? (i+1) : (n-i);
        int space = n - star;

        for (int j=0; j<space; j++) 
        {
            cout << " ";
        }

        for (int k=0; k<star; k++) 
        {
            cout << "*";
        }

        cout << endl;
    }

    cout << endl;

    // Other solution
    /*
    for (int i=0; i<n; i++) 
    {
        int stars = (i <= n / 2) ? (i + 1) : (n - i);

        int space = n - stars; 

        for (int j = 0; j < n; j++) 
        {
            if (j < space) 
            {
                cout << " "; 
            } 
            else 
            {
                cout << "*"; 
            }
        }

        cout << endl;
    }

    */

    return 0;
}