#include<iostream>
using namespace std;


int main() 
{
    int rows = 6;
    int columns = rows - 2;

    for (int i = 0; i < columns; i++) 
    {
        for (int j = 0; j < rows; j++)
            cout << "*";
        cout << endl;
    }

    return 0;
}