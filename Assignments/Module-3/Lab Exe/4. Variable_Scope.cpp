#include <iostream>
using namespace std;

// Global variable
int globalVar = 10;

// Function to show global variable usage
void displayGlobal() 
{
    cout << "Inside displayGlobal(): globalVar = " << globalVar << "\n";
}

// Function to demonstrate local variable
void displayLocal() 
{
    int localVar = 20;  // Local variable
    cout << "Inside displayLocal(): localVar = " << localVar << "\n";

    // This will access the global variable
    cout << "Inside displayLocal(): globalVar = " << globalVar << "\n";
}

main()
{
    // Local variable in main()
    int localVar = 5;

    cout << "Inside main(): localVar = " << localVar << "\n";
    cout << "Inside main(): globalVar = " << globalVar << "\n";

    // Calling functions
    displayGlobal();
    displayLocal();
}

