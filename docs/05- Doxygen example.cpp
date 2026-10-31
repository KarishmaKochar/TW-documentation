
/**
 * @file doxygen-example.cpp
 * @brief A simple Calculator program demonstrating Doxygen documentation.
 * @author Student Name
 */

#include <iostream>
using namespace std;

/**
 * @class Calculator
 * @brief Performs basic mathematical operations.
 */
class Calculator {
public:

    /**
     * @brief Adds two numbers.
     * @param a First number.
     * @param b Second number.
     * @return Sum of the two numbers.
     */
    int add(int a, int b) {
        return a + b;
    }

    /**
     * @brief Subtracts the second number from the first.
     * @param a First number.
     * @param b Second number.
     * @return Difference between the numbers.
     */
    int subtract(int a, int b) {
        return a - b;
    }

    /**
     * @brief Multiplies two numbers.
     * @param a First number.
     * @param b Second number.
     * @return Product of the two numbers.
     */
    int multiply(int a, int b) {
        return a * b;
    }

    /**
     * @brief Divides two numbers.
     * @param a Numerator.
     * @param b Denominator.
     * @return Result of division, or 0 if denominator is zero.
     */
    double divide(int a, int b) {
        if (b == 0) {
            cout << "Division by zero is not allowed." << endl;
            return 0;
        }
        return (double)a / b;
    }
};

/**
 * @brief Main function of the program.
 * @return 0 when the program executes successfully.
 */
int main() {

    Calculator calc;

    cout << "Addition: "
         << calc.add(10, 5) << endl;

    cout << "Subtraction: "
         << calc.subtract(10, 5) << endl;

    cout << "Multiplication: "
         << calc.multiply(10, 5) << endl;

    cout << "Division: "
         << calc.divide(10, 5) << endl;

    return 0;
}
