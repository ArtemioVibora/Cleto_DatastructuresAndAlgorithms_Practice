#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int var = 92;
    int *ptrVar = &var;
    int **ptrVar2 = &ptrVar;
    int ***ptrVar3 = &ptrVar2;
    
    
    cout << "**ptrVar2" << endl;
    cout << **ptrVar2 << endl;
    cout << "***ptrVar3" << endl;
    cout << ***ptrVar3 << endl; 
}
