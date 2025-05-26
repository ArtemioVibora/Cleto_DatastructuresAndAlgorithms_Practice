#include <iostream>

using namespace std;

int main()
{
    int arr[] = { 2, 5, 3 };
    int *ptr_arr = arr;
    cout << *(ptr_arr + 1) << endl;
    
}
