#include <iostream>
using namespace std;

int main()
{
    int pin, choice;
    double balance = 5000.0;
    double amount;

    cout << "Enter PIN: ";
    cin >> pin;

    if (pin != 1234)
    {
        cout << "Invalid PIN" << endl;
        return 0;
    }

    cout << "=== Account Menu ===" << endl;
    cout << "1. Withdraw" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Check Balance" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            cout << "Enter withdrawal amount: ";
            cin >> amount;

            if (amount > balance)
            {
                cout << "Your balance is not enough" << endl;
            }
            else
            {
                balance -= amount;
                cout << "Your balance is " << balance << endl;
                cout << "[" << amount << "] has been withdrawn effectively" << endl;
            }
            break;

        case 2:
            cout << "Enter deposit amount: ";
            cin >> amount;

            balance += amount;
            cout << "Deposit successful" << endl;
            cout << "[" << amount << "] has been deposited successfully" << endl;
            break;

        case 3:
            cout << "Your current balance is: " << balance << endl;
            break;

        default:
            cout << "Invalid choice" << endl;
    }

    return 0;
}