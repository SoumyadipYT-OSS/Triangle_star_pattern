#include<iostream>
using namespace std;

int main() 
{
    int n = 7;

    for (int i=0; i<n; i++) 
    {
        int invert_star_pattern = (i<=n/2) ? (i+1) : (n-i);
        int start_pattern = (i<n/2) ? (i+1) : (n-i);
        int space = n - invert_star_pattern;

        for (int j=0; j<space; j++) 
        {
            cout << " ";
        }
        for (int k=0; k<invert_star_pattern; k++) 
        {
            cout << "*";
        }
        for (int l=0; l<start_pattern-1; l++) 
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}