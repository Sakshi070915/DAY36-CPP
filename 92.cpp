/* 3.Create a program that:
a. Has a function divide (int a,int b) that performs division.
b. Throws an exception if the denominator is zero.
c. Calls the divide function from main() and handles the exception in main()*/
#include <iostream>
using namespace std;

// Function to divide two numbers
int divide(int a, int b) {
    if (b == 0) {
        throw b; // Throw an exception if the denominator is 0
    }
    return a / b; // Return the result of the division
}

int main() {
    int num1, num2, result;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    try {
        // Call the divide function
        result = divide(num1, num2);
        cout << num1 << " / " << num2 << " = " << result << endl;
    } catch (int num_exception) {
        cout << "Error: Cannot divide by " << num_exception << endl;
    }

    return 0;
}
