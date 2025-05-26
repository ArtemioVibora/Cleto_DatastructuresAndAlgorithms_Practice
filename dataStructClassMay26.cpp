#include <iostream>

using namespace std;

void func(int *ptrx)
{
    cout << *ptrx << endl;
    ++ *ptrx;
    cout << *ptrx << endl;
}

void normalFunc(int x)
{
    cout << x << endl;
    ++ x;
    cout << x << endl;
}

int main()
{
    int x;
    x = 10;
    cout << "x being passed through a function without a pointer" << endl;
    normalFunc(x);
    
    cout << "x not passed through func" << endl;
    cout << x << endl;
    cout << "x now being passed throug func" << endl;
    func(&x);
    cout << "Normal variable x, x declared in main" << endl;
    cout << x << endl;
}
