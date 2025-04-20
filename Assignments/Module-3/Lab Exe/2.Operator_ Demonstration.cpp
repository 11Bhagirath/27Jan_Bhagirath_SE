#include <iostream>
using namespace std;
main() 
{
    int a = 10, b = 5;

    // Arithmetic Operators
    cout << "Arithmetic Operators:\n";
    cout << "a + b = " << a + b << "\n";
    cout << "a - b = " << a - b << "\n";
    cout << "a * b = " << a * b << "\n";
    cout << "a / b = " << a / b << "\n";
    cout << "a % b = " << a % b << "\n";

    // Relational Operators
    cout << "\nRelational Operators:\n";
    cout << "a == b: " << (a == b) << "\n";
    cout << "a != b: " << (a != b) << "\n";
    cout << "a > b: " << (a > b) << "\n";
    cout << "a < b: " << (a < b) << "\n";
    cout << "a >= b: " << (a >= b) << "\n";
    cout << "a <= b: " << (a <= b) << "\n";

    // Logical Operators
    cout << "\nLogical Operators:\n";
    cout << "(a > 5 && b < 10): " << ((a > 5) && (b < 10)) <<"\n";
    cout << "(a < 5 || b < 10): " << ((a < 5) || (b < 10)) << "\n";
    cout << "!(a == b): " << !(a == b) << "\n";

    // Bitwise Operators
    cout << "\nBitwise Operators:\n";
    cout << "a & b = " << (a & b) << "\n";
    cout << "a | b = " << (a | b) << "\n";
    cout << "a ^ b = " << (a ^ b) << "\n";
    cout << "~a = " << (~a) << "\n";
    cout << "a << 1 = " << (a << 1) << "\n";
    cout << "a >> 1 = " << (a >> 1) << "\n";
}

