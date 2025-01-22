//============================================================================
// Name        : Module.cpp
// Author      : Integer Pointer Program
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
    // Step 1: Declare variables to store user input
    int num1, num2, num3;

    // Step 2: Prompt user to enter three integers
    cout << "Enter three integers separated by spaces: ";
    cin >> num1 >> num2 >> num3;

    // Step 3: Dynamically allocate memory for integer pointers
    int* ptr1 = new int(num1);
    int* ptr2 = new int(num2);
    int* ptr3 = new int(num3);

    // Step 4: Display values and addresses
    cout << "\n--- Variable Values and Corresponding Pointer Addresses ---" << endl;
    cout << "Value of num1: " << *ptr1 << ", Address in memory: " << ptr1 << endl;
    cout << "Value of num2: " << *ptr2 << ", Address in memory: " << ptr2 << endl;
    cout << "Value of num3: " << *ptr3 << ", Address in memory: " << ptr3 << endl;

    // Step 5: Deallocate memory and reset pointers
    delete ptr1; // Free memory allocated for ptr1
    delete ptr2; // Free memory allocated for ptr2
    delete ptr3; // Free memory allocated for ptr3

    ptr1 = nullptr; // Avoid dangling pointer
    ptr2 = nullptr;
    ptr3 = nullptr;

    cout << "\nMemory successfully deallocated, and pointers reset to nullptr." << endl;

    return 0; // End program
}
