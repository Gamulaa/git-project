#include <iostream>
using namespace std;

// Function declarations
void showMenu();
void deposit(double &balance);
void withdraw(double &balance);
void checkBalance(double balance);

int main()
{
    double balance = 1000.0;   // Initial balance
    int choice;

    do
    {
        showMenu();
        cin >> choice;

        switch(choice)
        {
            case 1:
                deposit(balance);
                break;

            case 2:
                withdraw(balance);
                break;

            case 3:
                checkBalance(balance);
                break;

            case 4:
                cout << "Thank you for using the ATM.\n";
                break;

            default:
                cout << "Invalid choice. Try again.\n";
        }

    } while(choice != 4);

    return 0;
}

// Function to display menu
void showMenu()
{
    cout << "\n====== ATM MENU ======\n";
    cout << "1. Deposit\n";
    cout << "2. Withdraw\n";
    cout << "3. Check Balance\n";
    cout << "4. Exit\n";
    cout << "Choose an option: ";
}

// Function to deposit money
void deposit(double &balance)
{
    double amount;
    cout << "Enter amount to deposit: ";
    cin >> amount;

    if(amount <= 0)
    {
        cout << "Invalid amount.\n";
    }
    else
    {
        balance += amount;
        cout << "Deposit successful.\n";
    }
}

// Function to withdraw money
void withdraw(double &balance)
{
    double amount;
    cout << "Enter amount to withdraw: ";
    cin >> amount;

    if(amount <= 0)
    {
        cout << "Invalid amount.\n";
    }
    else if(amount > balance)
    {
        cout << "Insufficient funds.\n";
    }
    else
    {
        balance -= amount;
        cout << "Withdrawal successful.\n";
    }
}

// Function to check balance
void checkBalance(double balance)
{
    cout << "Current balance: " << balance << endl;
}
