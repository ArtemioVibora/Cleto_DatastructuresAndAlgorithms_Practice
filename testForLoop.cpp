#include <iostream>
#include <array>

using namespace std;

template <typename T, size_t N>
int len(T (&arr)[N])
{
    return N;
}

int main()
{
    int arr[10];

    for (int i = 0; i < len(arr); i++)
    {
        cout << "Something something I am doing something\n";

    }

}
