#include <iostream>
using namespace std;
main()
{
    int rows;

    cout << "Enter the number of rows: ";
    cin >> rows;

    // Outer loop for number of rows
    for (int i = 1; i <= rows; ++i)
	 {
        // Inner loop for printing stars in each row
        for (int j = 1; j <= i; ++j)
		{
            cout << "* ";
        }
        cout << "\n";  // Move to the next line after each row
    }
}

