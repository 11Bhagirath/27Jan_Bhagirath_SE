#include <iostream>
#include <string>
using namespace std;

// Base class
class Person 
{
    string name;
    int age;

	public:
    void getDetails()
	{
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void displayDetails()
	{
        cout << "Name: " << name << ", Age: " << age << "\n";
    }
};

// Derived class: Student
class Student : public Person 
{

    string studentID;

	public:
	void getStudentInfo()
	{
	    getDetails();  // Reuse base class method
	    cout << "Enter student ID: ";
        cin >> studentID;
    }

    void displayStudentInfo() 
	{
        displayDetails();  // Reuse base class method
        cout << "Student ID: " << studentID << "\n";
    }
};

// Derived class: Teacher
class Teacher : public Person 
{
    string subject;

	public:
    void getTeacherInfo()
	{
        getDetails();  // Reuse base class method
        cout << "Enter subject taught: ";
        cin >> subject;
    }

    void displayTeacherInfo()
	{
        displayDetails();  // Reuse base class method
        cout << "Subject: " << subject << "\n";
    }
};

main()
{
    // Student object
    cout << "Student Info:\n";
    Student s;
    s.getStudentInfo();
    s.displayStudentInfo();

    cout << "\nTeacher Info:\n";
    // Teacher object
    Teacher t;
    t.getTeacherInfo();
    t.displayTeacherInfo();
    
}

