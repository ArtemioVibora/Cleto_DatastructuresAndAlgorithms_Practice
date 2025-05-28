#include <iostream>

using namespace std;

void pointerIncrementer(int &normalVariable)
{
    cout << "Incrementing\n";
    ++normalVariable;
    
}

void pointerDecrementer(int &normalVariable)
{
    cout << "decrementing\n";
    --normalVariable;
}


int main()
{
    cout << "I want to practice pointers for today\n";
    
    int normalVariable = 0;
    bool flag = true;
    int choice;
    while(flag)
    {
        cout << "\n<1> Increment";
        cout << "\n<2> Decrement";
        cout << "\n<3> Show number";
        cout << "\n<4> Exit\n";
        cout << "What is the choice: ";
        cin >> choice;
        if (choice == 1) pointerIncrementer(normalVariable);
        else if (choice == 2) pointerDecrementer(normalVariable);
        else if (choice == 3) cout << normalVariable;
        else if (choice == 4) flag = false;
        else cout << "Error!" << endl;
        
    }
    
    cout << endl << "Thank you for using the program!" << endl;
    
}
