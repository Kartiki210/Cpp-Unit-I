#include <iostream>  // Includes input/output library
using namespace std; // Allows use of cout without std::

int main()
{
    int marks = 45; // Stores the student's marks

    // Checks whether marks are greater than or equal to 40
    if (marks >= 40)
    {
        cout << "Pass"; // Displays Pass if the condition is true
    }
    else
    {
        cout << "Fail"; // Displays Fail if the condition is false
    }

    return 0; // Indicates successful program execution
}
