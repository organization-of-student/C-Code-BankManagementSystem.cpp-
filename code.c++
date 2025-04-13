#include <iostream>
#include <iomanip>
using namespace std;

const int MAX_ACCOUNTS = 10;

class BankAccount {
    int accountNumber;
    string name;
    char type;
    double balance;

public:
    BankAccount() {
        accountNumber = 0;
        balance = 0.0;
        type = ' ';
        name = "";
    }

    void createAccount(int accNo) {
        accountNumber = accNo;
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter Account Type (S/C): ";
        cin >> type;
        type = toupper(type);
        cout << "Enter Initial Deposit: ";
        cin >> balance;
        cout << "Account Created Successfully!\n";
    }

    void showAccount() const {
        cout << "Account No.: " << accountNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Type: " << type << endl;
        cout << "Balance: " << fixed << setprecision(2) << balance << endl;
    }
};

int main() {
    BankAccount account;
    account.createAccount(1); // Create an account
    cout << "\nAccount Details:\n";
    account.showAccount();    // Show account details
    return 0;
}
