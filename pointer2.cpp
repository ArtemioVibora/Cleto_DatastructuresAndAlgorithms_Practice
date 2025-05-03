#include <bits/stdc++.h>

using namespace std;

//Taken From GeeksForGeeks

int main()
{
    int a = 10;
    int b = 99;

    int *ptr = &a;
    cout << "Memory Address: " << ptr << endl;
    cout << "Value: " << *ptr << endl;
    cout << "Swapped" << endl;
    ptr = &b;
    cout << "Memory Address: " << ptr << endl;
    cout << "Value: " << *ptr << endl;
}
