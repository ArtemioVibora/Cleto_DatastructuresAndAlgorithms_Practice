#include <iostream>

using namespace std;

const int MAX_SIZE = 1000;
typedef int ELEMENTTYPE;

int list_full(int last)
{
    if (last == MAX_SIZE -1)
    {
        return (1);
    }
    else
    {
        return (0);
    }
}

int list_empty(int last)
{
    if (last < 0)
    {
        return (1);
    }
    else
    {
        return(0);
    }
}

void print_items(ELEMENTTYPE list[], int last)
{
    int index;

    if (list_empty(last) == 1)
        cout << "\nThe List is Empty";
    else
        for (index = 0; index <= last; ++index)
            cout << "\nThe value of item " << index + 1 << " = " << list[index] << ".";
}

//Kind of buggy
//It means it needs better assessment
void locate_item(ELEMENTTYPE list[], ELEMENTTYPE search_data, int last)
{
    int index;

    if (list_empty(last) == 1)
    {
        cout << "\nThe List is Empty!";
    }
    else
    {
        index = 0;
        while (index != last && list[index] != search_data)
        {
            ++index;
            
        }
        if (index != last + 1)
        {
            cout << "\nItem Requested is Item " << index + 1 << ".";
        }
        else
        {
            cout << "\nItem Does not exist";
        }
    }
}

void add_item(ELEMENTTYPE list[], ELEMENTTYPE new_data, int pos, int *ptr_last)
{
    int index;

    if (list_full(*ptr_last) == 1)
    {
        cout << "\nList is full";
    }
    else
    {
        for(index = *ptr_last; index >= pos; --index)
        {
            list[index + 1] = list[index];
        }
        list[pos] = new_data;
        // this is to move the value of size per se of the array
        *ptr_last = *ptr_last + 1;
        cout << "\nItem has been inserted" << endl;

    }
}

void delete_item(ELEMENTTYPE list[], int pos, int *ptr_last)
{
    int index;
    if (list_empty(*ptr_last) == 1)
    {
        cout << "\nList is empty";
    }
    else
    {
        for (index = pos; index <= *ptr_last; ++index)
        {
            list[index] = list[index + 1];
        }

        //This is to reduce
        *ptr_last = *ptr_last - 1;
        cout << "\n Item has been deleted";
    }
}


int main()
{
    //cout << "Hello World" << endl;

    ELEMENTTYPE list[MAX_SIZE] = {0};
    int last = 0;

    int choice = 0;

    int n;
    int pos;

    while (choice != 5)
    {
        cout << "List (Array) Program" << endl;
        cout << "------------------------------- " << endl;
        cout << "There are currently " << last << " items in the list." << endl << endl;

        cout << "Options" << endl;
        cout << "<1> Add item" << endl; 
        cout << "<2> Delete Item " << endl;
        cout << "<3> Locate Item in the List " << endl;
        cout << "<4> Print Items in the List " << endl;
        cout << "<5> Exit" << endl;
        cout << "Enter the number of your choice: ";
        cin >> choice;
        switch(choice)
        {
            case 1:
                cout << "Enter item: ";
                cin >> n;
                cout << "Enter positions: ";
                cin >> pos;
                add_item(list, n, pos, &last);
                cout << "Item has been inserted!" << endl; 
                break;
            case 2:
                cout << "Enter position: ";
                cin >> pos;
                delete_item(list, pos, &last);
                cout << "Item has been deleted" << endl;
                break;
            case 3:
                cout << "Enter data: ";
                cin >> n;
                locate_item(list, n, last);
                break;
            case 4:
                print_items(list, last); 
                break; 
        }

    }


    return 0;

}
