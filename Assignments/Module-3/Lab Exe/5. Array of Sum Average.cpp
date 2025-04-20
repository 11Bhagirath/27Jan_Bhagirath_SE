#include <iostream>
using namespace std;

main()
{
    const int SIZE = 100;  // Max array size
    int arr[SIZE];
    int n;
    int sum = 0;
    float average;

    // Input: number of elements
    cout << "Enter the number of elements (max 100): ";
    cin >> n;

    // Input: array elements
    cout << "Enter " << n << " integers:" << "\n";
    for (int i = 0; i < n; ++i)
	{
        cin >> arr[i];
        sum += arr[i];  // Add each element to sum
    }

    // Calculate average
    average = static_cast<float>(sum) / n;

    // Output: sum and average
    cout << "\nSum = " << sum << "\n";
    cout << "Average = " << average << "\n";
}

