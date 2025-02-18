#include <iostream>
#include <string>
using namespace std;

int main() {
    double num1, num2;
    char operation;
    string choice;

    do {
        cout << "Start or End? (start/end): ";               //hghg
        cin >> choice;

        if (choice == "end") {
            cout << "Niga Rick";
            break;
        }

        cout << "Input number 1: ";
        cin >> num1;

        cout << "Input number 2: ";
        cin >> num2;

        cout << "Input operation (*, +, -, /): ";
        cin >> operation;

        if (operation == '+') {
            cout << "Result: " << num1 + num2 << endl;
        }
        else if (operation == '-') {
            cout << "Result: " << num1 - num2 << endl;
        }
        else if (operation == '*') {
            cout << "Result: " << num1 * num2 << endl;
        }

        else {
            cout << "Invalid input. Please try again." << endl;
        }
    } while (choice != "end");

    return 0;
    //deo ang pogi 246810
}
