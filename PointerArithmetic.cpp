#include <iostream>

using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4};
    
    //First array shows that if we print it, it would produce us a memory address
    cout << arr << endl; //This is going to return a memory address
    
    //However if we were to do the pointer operation, we would get our values 
    cout << *arr + 1 << endl;
    
    //For fun, I will put in a for loop just because, dont judge me haha
    for (int i = 0; i < 4; i++)
    {
        //This is cursed
        cout << *arr + i << endl;
    }
    
}
