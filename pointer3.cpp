#include <iostream>

using namespace std;

int main()
{
    int i = 512;
    int *j = &i;

    cout << "The value of i is " << i << endl;
    cout << "The value of j is " << *j << endl;

    *j = 0;

    cout << "The value of i is " << i << endl;

}
