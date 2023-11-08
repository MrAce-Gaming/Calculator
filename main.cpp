#include <iostream>
using namespace std;

int main() {
    cout << "Welcome to Calculator!" << endl;

    while (true) {
        cout << "Choose an operation/option below:" << endl;
        cout << "1. Add\n2. Sub\n3. Mul\n4. Div\n5. Average\n6. Quit" << endl;

        int option;
        cin >> option;

        if (option == 6) {
            cout << "Exiting the calculator." << endl;
            break; 
        } else if (option < 1 || option > 5) {
            cout << "Invalid choice. Please select a valid option." << endl;
            continue;
        }

        double num1, num2;
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;

        switch (option) {
            case 1:
                cout << "Result: " << num1 + num2 << endl;
                break;
            case 2:
                cout << "Result: " << num1 - num2 << endl;
                break;
            case 3:
                cout << "Result: " << num1 * num2 << endl;
                break;
            case 4:
                if (num2 != 0) {
                    cout << "Result: " << num1 / num2 << endl;
                } else {
                    cout << "Cant divide by zero. o_0" << endl;
                }
                break;
            case 5:
                cout << "Result:" << (num1+num2)/2 << endl;
                break;
        }
        int x;
        cout << "Is there anything else you would like to do?" << endl;
        cout << "Reply with 1 to continue or 6 to exit: ";
        cin>>x;
    }
    return 0;
}
