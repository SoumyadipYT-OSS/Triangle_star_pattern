#include<iostream>
using namespace std;

int main() 
{
    int n = 7;
    
    for (int i=0; i<n; i++)
    {
        int star = (i<n/2) ? (i+1) : (n-i);

        for (int j=0; j<star; j++) 
        {
            cout << "*";
        }
        
        cout << endl;
    }

    return 0;
}