#include <iostream>
using namespace std;
main()
{
    int matrix1[2][2], matrix2[2][2], result[2][2];

    // Input for Matrix 1
    cout << "Enter elements of the first 2x2 matrix:\n";
    for (int i = 0; i < 2; ++i)
	{
        for (int j = 0; j < 2; ++j)
		{
            cout << "matrix1[" << i << "][" << j << "]: ";
            cin >> matrix1[i][j];
        }
    }

    // Input for Matrix 2
    cout << "\nEnter elements of the second 2x2 matrix:\n";
    for (int i = 0; i < 2; ++i)
	{
        for (int j = 0; j < 2; ++j)
		{
            cout << "matrix2[" << i << "][" << j << "]: ";
            cin >> matrix2[i][j];
        }
    }

    // Matrix Addition
    for (int i = 0; i < 2; ++i)
	{
        for (int j = 0; j < 2; ++j)
		{
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Output the Result
    cout << "\nResultant Matrix after Addition:\n";
    for (int i = 0; i < 2; ++i)
	{
        for (int j = 0; j < 2; ++j) 
		{
        	cout << result[i][j] << " ";
        }
        cout << "\n";
    }
}

