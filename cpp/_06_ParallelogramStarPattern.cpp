#include<iostream>
using namespace std;

int main() 
{
    int columns = 6;
    int rows = columns - 2;

    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j <= columns + i; j++) 
        {
            if (j <= i)
                cout << " ";
            else
                cout << "*";
        }
        cout << endl;
    }

    return 0;
}