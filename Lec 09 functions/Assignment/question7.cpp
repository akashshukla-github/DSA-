// In C++, you can have multiple functions with the same name as long as they have different parameter lists. This is known as function overloading. The C++ compiler distinguishes between these functions based on the number and types of their parameters. Here's an example:


#include <iostream>

// Function with one integer parameter
void printValue(int value) {
    std::cout << "Integer value: " << value << std::endl;
}

// Function with a double parameter
void printValue(double value) {
    std::cout << "Double value: " << value << std::endl;
}

int main() {
    printValue(5);      // Calls the first function
    printValue(3.14);   // Calls the second function
    return 0;
}


// In the code above, we have two functions named `printValue`, one that takes an integer parameter and another that takes a double parameter. When you call `printValue` in the `main` function, the compiler determines which version of the function to call based on the argument's type.

// So, yes, you can use the same function name for different functions as long as the parameter lists are distinct. This is known as function overloading, and it is a useful feature for writing more readable and maintainable code.