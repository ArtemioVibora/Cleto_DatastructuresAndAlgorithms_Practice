#include <iostream>

using namespace std;

const int MAX_SIZE = 3;
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

void addElement(ELEMENT_TYPE list[], int data, int pos, int &last)
{
  if (isFull(last))
  {
    cout << "It is full!" << endl;
  
  }
  else
  {
    //array of {1, 0, 0}
    //last = -1 pos = 0
    for (int i = last; i >= pos; --i)
    {
      list[i + 1] = list[i];
      cout << "Incrementing";
    }
    list[pos] = data;
    ++last;
    cout << "Item has been inserted\n";
  }
}

void deleteElement(ELEMENT_TYPE list[], int pos, int &last)
{
  if(isEmpty(last))
  {
    cout << "It is empty!" << endl;
    
  }
  else
  {
    for (int i = pos; i <= last; i++)
    {
      list[i] = list[i + 1];
    
    }
    --last;
    cout << "Item has been deleted\n";
  
  }

}

void printItem(ELEMENT_TYPE list[], int last)
{
  if(isEmpty(last))
  {
    cout << "{null}" << endl;
  
  }
  else
  {
    cout << "{";
    for (int i = 0; i <= last; i++)
    {
      if (i < last)
      {
        cout << list[i] << ", ";
      }
      else if (i == last)
      {
        cout << list[i] << " "; 
      }
    }
    cout << "}";
  }

}

//Menu
void menu(int last)
{
  cout << endl;
    cout << "ARRAY INSERTER" << endl;
    cout << "---------------------------" << endl;
    cout << "<1> Add" << endl;
    cout << "<2> Delete " << endl;
    cout << "<3> Search " << endl;
    cout << "<4> Print all" << endl;
    cout << "<5> Exit " << endl;
    cout << "---------------------------" << endl;
    cout << "There are " << last + 1 << " in the list " << endl;
    cout << ">>>> ";
}

//Filter functions
int promptData()
{
  int data;
  cout << "Enter data: ";
  while(!(cin >> data))
  {
    cin.clear();
    cin.ignore(80, '\n');
    cout << "Enter data: ";
  
  }
  return data;
}

int promptChoice(int last)
{
  int choice = 0;
  while(!(cin >> choice) || choice < 1 || choice > 5)
  {
    cin.clear();
    cin.ignore(80, '\n');
    cout << "Invalid Entry!" << endl;
    menu(last);
  }
  return choice;
}

int promptPos(int last)
{
  int pos;
  bool flag = true;
  while(flag)
  {
    if (isEmpty(last))
    {
      cout << "Error! List is empty!" << endl;
      flag = false;
    }
    else
    {
      cout << "Enter position: ";
      if(!(cin >> pos) || pos < 0 || pos > MAX_SIZE)
      {
        cout << "Error! Invalid Position" << endl;
        pos = -1;
        flag = false;
        
      }
    
    }
  
  }
  return pos;

}
//END FILTER FUNCTIONS

void runProgram()
{
  ELEMENT_TYPE list[MAX_SIZE];
  int last = -1;

  int choice, data, search_data, pos;
  
  choice = 0;
  
  do {
    menu(last);
    choice = promptChoice(last); 
    
    switch(choice)
    {
      case 1:
        data = promptData();
        pos = promptPos(last);
        if (pos == -1)
        {
          break;
        }
        addElement(list, data, pos, last);
        break;
      case 2:
        pos = promptPos(last);
        if (pos == -1)
        {
          break;
        }
        deleteElement(list, pos, last);
        break;
      case 3:
        break;
      case 4:
        printItem(list, last);
        break;
    }
    
    
  } while (choice != 5);
  

}


int main()
{
  
  
  //addElement(list, 1, 0, last);
  //addElement(list, 2, 0, last);
  //printItem(list, last);
  
  runProgram();
  
}
