#include <iostream>
#include <array>

using namespace std;

template <typename T, size_t N>
int actualLength(T (&arr)[N])
{
    return N;
}

int main()
{
    int arr[3];

    cout << "Length: " << actualLength(arr) << endl;

    return 0; 
}
