#include <iostream>
using namespace std;
main() 
{
    // Implicit Type Conversion
    int intVal = 42;
    double doubleVal;

    doubleVal = intVal;  // int to double (implicit conversion)

    cout << "Implicit Type Conversion:" << "\n";
    cout << "int value: " << intVal << "\n";
    cout << "Converted to double: " << doubleVal << "\n";

    // Explicit Type Conversion (Type Casting)
    double num = 9.78;
    int castedNum;

    castedNum = (int)num;  // double to int (explicit conversion)

    cout << "\nExplicit Type Conversion:" << "\n";
    cout << "double value: " << num << "\n";
    cout << "Converted to int: " << castedNum << "\n";
}

