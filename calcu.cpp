#include <iostream>

using namespace std;

int main() {
    int num1, num2, sum, product, quotient, difference, remainder;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    sum = num1 + num2;
    product = num1 * num2;
    quotient = num1 / num2;
    difference = num1 - num2;
    remainder = num1 % num2;

    cout << "Sum: " << sum << endl;
    cout << "Product: " << product << endl;
    cout << "Quotient: " << quotient << endl;
    cout << "Difference: " << difference << endl;
    cout << "Remainder: " << remainder << endl;

    return 0;
}
