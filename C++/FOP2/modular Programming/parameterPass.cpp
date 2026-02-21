#include <iostream>
using namespace std;
void showBalance(double balance);
void deposit(double &balance);
void withdraw(double &balance);
int main(){
  double balance = 1000.0;
  int choice;
  do {
    cout << "1. Show Balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    switch (choice) {
      case 1:
        showBalance(balance);
        break;
      case 2:
        deposit(balance);
        break;
      case 3:
        withdraw(balance);
        break;
      case 4:
        cout << "Exiting..." << endl;
        break;
      default:
        cout << "Invalid choice. Please try again." << endl;
    }
  } while (choice != 4);
  return 0;
}
void showBalance(double balance) {
  cout << "Current Balance: $" << balance << endl;
}
void deposit(double &balance) {
  double amount;
  cout << "Enter amount to deposit: ";
  cin >> amount;
  if (amount > 0) {
    balance += amount;
    cout << "Amount deposited successfully." << endl;
  } else {
    cout << "Invalid amount. Please enter a positive value." << endl;
  }
}
void withdraw(double &balance) {
  double amount;
  cout << "Enter amount to withdraw: ";
  cin >> amount;
  if (amount > 0 && amount <= balance) {
    balance -= amount;
    cout << "Amount withdrawn successfully." << endl;
  } else {
    cout << "Invalid amount. Please enter a positive value less than or equal to your balance." << endl;
  }
}