#include <iostream>  // Includes input/output library
using namespace std; // Allows use of cout without std::

int add(int, int); // Function declaration (prototype)

int main()
{
    // Declaring and initializing two variables
    int a = 10, b = 20;

    // Calling the add() function and displaying the result
    cout << "Sum = " << add(a, b) << endl;

    return 0; // Indicates successful program execution
}

// Function definition to add two numbers
int add(int x, int y)
{
    return x + y; // Returns the sum of x and y
}
