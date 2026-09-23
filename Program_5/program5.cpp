#include <iostream>  // Includes input/output library
using namespace std; // Allows use of cout without std::

class Student
{
public:
    string name; // Stores the student's name
    int age;     // Stores the student's age

    // Function to display student details
    void show()
    {
        cout << name << " " << age << endl;
    }
};

int main()
{
    Student s1; // Creates an object of Student class

    // Assigning values to the object
    s1.name = "Amit";
    s1.age = 20;

    // Calling the show() function
    s1.show();

    return 0; // Indicates successful program execution
}
