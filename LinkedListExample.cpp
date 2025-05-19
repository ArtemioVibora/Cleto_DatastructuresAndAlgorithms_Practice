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

    add_item(list, 1, 0, &last);
    print_items(list, last);
    //locate_item(list, 2, last);
    add_item(list, 2, 0, &last);
    add_item(list, 28, 0, &last);
    add_item(list, 3, 1, &last);
    print_items(list, last);


    return 0;

}