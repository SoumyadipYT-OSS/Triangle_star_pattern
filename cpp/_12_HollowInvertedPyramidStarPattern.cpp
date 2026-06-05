#include<iostream>
using namespace std;

int main() 
{
    int n = 4;

    for (int i=0; i<n; i++) 
    {
        for (int j=0; j<i; j++) 
        {
            cout << " ";
        }

        for (int k=0; k<(2*(n-i)-1); k++) 
        {
            if(i==0 || k==0 || k==(2*(n-i)-1)-1)
                cout << "*";
            else
                cout << " ";
        }

        cout << endl;
    }

    return 0;
}