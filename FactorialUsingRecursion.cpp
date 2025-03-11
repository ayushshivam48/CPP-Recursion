// WAP to demonstrate use of recursion
#include <iostream>
using namespace std;

// Function to calculate factorial using recursion
int factorial(int n) {
    if (n == 0 || n == 1) // Base case
        return 1;
    else
        return n * factorial(n - 1); // Recursive call
}

int main() {
    int num;

    cout << "Enter a number to calculate its factorial: ";
    cin >> num;

    if (num < 0) {
        cout << "Factorial of a negative number is undefined." << endl;
    } else {
        cout << "The factorial of " << num << " is: " << factorial(num) << endl;
    }

    // Display your details
    cout << "\nName: Ayush Shivam" << endl;
    cout << "Enrollment no: A45304823048" << endl;
    cout << "Class: BCA 3 A" << endl;

    return 0;
}
