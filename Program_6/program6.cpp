#include <iostream>  // Includes input/output library
using namespace std; // Allows use of cout without std::

class Demo
{
public:

    // Constructor
    Demo()
    {
        cout << "Constructor called ";
    }

    // Destructor
    ~Demo()
    {
        cout << "Destructor called";
    }
};

int main()
{
    Demo d; // Creates an object of Demo class

    return 0; // Object is destroyed automatically here
}
