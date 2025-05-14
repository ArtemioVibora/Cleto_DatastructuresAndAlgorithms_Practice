#include <iostream>

using namespace std;

typedef int number;
number MAX_INDEX = 10;

void add(number a[], number i, number n)
{
    a[i] = n;
}

int promptActualIndexOfList()
{
    int i;
    cout << "What is the actual number of index: ";
    cin >> i; 
    return i;
}


void display(number arr[])
{
    cout << endl;
    cout << "[";
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " "; 
    }
    cout << "]";
}

int main()
{
    number actualIndex = promptActualIndexOfList();
    number list[MAX_INDEX] = {0};
    add(list, 0, 2);
    add(list, 1, 34);
    display(list);
    add(list, 2, 6);
    display(list);

}