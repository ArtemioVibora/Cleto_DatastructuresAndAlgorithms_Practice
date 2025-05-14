#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void displayVector(vector<int> v)
{
    cout << "[";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";

    }
    cout << "]" << endl;

}

int main()
{
    vector<int> integerV = {1};
    displayVector(integerV);

    integerV.push_back(2);
    displayVector(integerV);

    integerV.push_back(3);
    displayVector(integerV);

    return 0;
}