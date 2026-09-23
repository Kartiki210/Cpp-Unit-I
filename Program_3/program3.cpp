#include <iostream>  // Includes input/output library
using namespace std; // Allows use of cout without std::

int main()
{
    // Declares an array to store marks of 5 subjects
    int marks[5] = {78, 82, 91, 67, 88};

    // Loop to access and display each element of the array
    for (int i = 0; i < 5; i++)
    {
        cout << marks[i] << " "; // Displays the current mark
    }

    return 0; // Indicates successful program execution
}
