#include <iostream>  // Includes input/output library
using namespace std; // Allows use of cout without std::

class Test
{
private:
    int value; // Private data member

public:

    // Parameterized constructor
    Test(int v)
    {
        value = v; // Assigns the given value to value
    }

    // Inline function to return the value
    inline int getValue()
    {
        return value;
    }

    // Friend function declaration
    friend void show(Test t);
};

// Friend function definition
void show(Test t)
{
    cout << t.value; // Accesses private member using friend function
}

int main()
{
    Test obj(50); // Creates an object and initializes value to 50

    // Calls the inline member function
    cout << obj.getValue() << endl;

    // Calls the friend function
    show(obj);

    return 0; // Indicates successful program execution
}
