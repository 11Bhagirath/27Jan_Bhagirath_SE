#include <iostream>
using namespace std;
main() 
{
    // Constant declaration
    const float PI = 3.14159f;  // constant float
    const int DAYS_IN_WEEK = 7;

    // Variable declarations
    int age = 20;                 // Integer variable
    double salary = 45000.50;     // Double variable
    char grade = 'A';             // Character variable
    bool isEmployed = true;       // Boolean variable
    string name = "Bhagirath";    // String variable

    // Performing some operations
    age += 5; // Increase age by 5
    salary *= 1.1; // Give a 10% raise
    grade = 'B'; // Grade updated
    isEmployed = !isEmployed; // Toggle employment status

    // Output the values
    cout << "Name: " << name << "\n";
    cout << "Age: " << age << "\n";
    cout << "Salary: " << salary << "\n";
    cout << "Grade: " << grade << "\n";
    cout << "Is Employed: " << (isEmployed ? "Yes" : "No") << "\n";
    cout << "Constant PI: " << PI << "\n";
    cout << "Days in a week: " << DAYS_IN_WEEK <<"\n";
}

