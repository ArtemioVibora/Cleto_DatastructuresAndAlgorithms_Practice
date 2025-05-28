#include <iostream>

using namespace std;

int main()
{
    int x = 1;
    int *ptrX = &x;
    int **ptrX2 = &ptrX;
    int ***ptrX3 = &ptrX2;
    int ****ptrX4 = &ptrX3;
    int *****ptrX5 = &ptrX4;
    int ******ptrX6 = &ptrX5;
    
    cout << ******ptrX6;
}
