#include<iostream>
using namespace std;

int main() 
{
    int rows = 6;
    int columns = rows - 2;

    for (int i = 0; i < columns; i++) 
    {
        for (int j = 0; j < rows; j++) 
        {
            if (i==0 || i==columns-1 || j==0 || j==rows-1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}