/*
    2
    43
    765
    1110198
    1110198
    765
    43
    2
*/

#include<iostream>
using namespace std;

int main() 
{
    int n = 4;

    for (int i=1; i<=2*n; i++) 
    {
        int current_k;

        if (i <= n)
            current_k = i;
        else 
            current_k = (2*n+1)-i;

        
        int start_num = (current_k * (current_k + 1)/2) + 1;

        for (int j=0; j<current_k; j++)
            cout << (start_num - j);
        
        cout << endl;
    }

    return 0;
}