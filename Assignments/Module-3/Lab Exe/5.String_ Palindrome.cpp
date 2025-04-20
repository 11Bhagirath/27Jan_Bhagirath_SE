#include <iostream>
#include <string>
using namespace std;

main()
{
    string str, reversedStr;
    
    cout << "Enter a string: ";
    cin >> str;

    // Reverse the string
    for (int i = str.length() - 1; i >= 0; --i) 
	{
        reversedStr += str[i];
    }

    // Check if original and reversed are the same
    if (str == reversedStr) 
	{
        cout << "\"" << str << "\" is a palindrome." << "\n";
    }
	else
	{
        cout << "\"" << str << "\" is not a palindrome." << "\n";
    }
}

