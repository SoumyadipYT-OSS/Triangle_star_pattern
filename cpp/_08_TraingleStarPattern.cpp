#include<iostream>
using namespace std;

int main() 
{
    int n = 4;
    
    for (int r=0; r<n; r++) 
    {
        for (int c=0; c<=r; c++) 
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}