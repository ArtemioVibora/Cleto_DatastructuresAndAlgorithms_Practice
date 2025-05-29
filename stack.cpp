#include <iostream>
#include <array>

using namespace std;

const int MAX_SIZE = 5;
typedef int ELEMENT_TYPE;


bool isFull(int last)
{
  if (last == MAX_SIZE - 1)
  {
    return true;
  }
  
  return false;
}

bool isEmpty(int last)
{
  if (last == -1)
  {
    return true;
  }
  
  return false;
}

void push(ELEMENT_TYPE list[], int data, int &last)
{

  if (isEmpty(last))
  {
    list[0] = data;
    ++last;
  }
  else
  {
    ++last;
    for (int i = last; i > 0; --i)
    {
      list[i] = list[i - 1];
      // cout << "incrementing" << endl;
    }
    list[0] = data;
  }
}

ELEMENT_TYPE pop(ELEMENT_TYPE list[], int &last)
{
  ELEMENT_TYPE value = list[last];
  
  if (isEmpty(last))
  {
    cout << "It is empty!\n";
  }
  else
  {
    cout << endl;
    for (int i = 0; i < last - 1; ++i)
    {
      list[i] = list[i + 1];
    }
    --last;
  }
  
  return value;

}

void printElement(ELEMENT_TYPE list[], int last)
{
  if (isEmpty(last))
  {
    cout << "It is empty" << endl;
  }
  else
  {
    cout << "{";
    for (int i = 0; i <= last; i++)
    {
    
      if (i != last)
      {
        cout << list[i] << ", ";
      }
      else
      {
        cout << list[i];
      }
    }
    cout << "}";
  }

}

int main()
{
  ELEMENT_TYPE list[MAX_SIZE];
  int last = -1;
  
  push(list, 2, last);
  printElement(list, last);
  push(list, 3, last);
  printElement(list, last);
  push(list, 4, last);
  printElement(list, last);
  push(list, 5, last);
  printElement(list, last);
  cout << endl << pop(list, last);
}
