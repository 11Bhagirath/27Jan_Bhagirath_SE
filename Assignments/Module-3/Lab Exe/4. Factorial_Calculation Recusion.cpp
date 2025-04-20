#include <iostream>
using namespace std;

// Recursive function to calculate factorial
int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;               // Base case
    else
        return n * factorial(n - 1);  // Recursive call
}
main()
{
    int num;

    cout << "Enter a positive integer: ";
    cin >> num;

    if (num < 0)
        cout << "Factorial is not defined for negative numbers." << "\n";
    else
        cout << "Factorial of " << num << " is: " << factorial(num) << "\n";
}

