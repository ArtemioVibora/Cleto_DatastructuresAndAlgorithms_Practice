#include <iostream>

using namespace std;

struct Sample
{
    char charX;
    int intX;
    double doubleX;
};

int main()
{
    string name = "hello";
    double doubleX;
    float floatX;
    int intX;
    char charX;

    long longX;
    short shortX;
    long double longDoubleX;
    //long float longFloatX;
        

    Sample sample;

    cout << "SIZE CHEATSHEET" << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << "The size of a string is " << sizeof(name) << " bytes. " << endl;
    cout << "The size of a double is " << sizeof(doubleX) << " bytes. " <<  endl;
    cout << "The size of a float is " << sizeof(floatX) << " bytes. " << endl;
    cout << "The size of an integer is " << sizeof(intX) << " bytes. " << endl;
    cout << "The size of a char (character) is " << sizeof(charX) << " bytes." << endl;

    cout << endl << "Short and Long" << endl;
    cout << "---------------------------------------------------------- " << endl;
    cout << "The size of long (int) is " << sizeof(longX) << endl;
    cout << "The size of short (int) is " << sizeof(shortX) << endl;
    cout << "The size of long double is " << sizeof(longDoubleX) << endl;
    //For argument's sakes
    //cout << "The size of a long float is " << sizeof(longFloatX) << endl;
    //It does not work
     
    cout << "This is struct size" << endl;
    cout << sizeof(sample) << endl;
}
