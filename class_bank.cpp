#include <iostream>
#include <string>
using namespace std;

class BankAccount 
{
private:
    string accountHolderName;
    int accountNumber;
    double balance;

public:
    BankAccount() : accountHolderName(""), accountNumber(0), balance(0.0) {}
    void setDetails(string name, int accNum, double bal)
    {
        accountHolderName = name;
        accountNumber = accNum;
        balance = bal;
    }
    void display() 
    const 
    {
        cout << "\n--- Account Details ---" << endl;
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: $" << balance << endl;
        cout << "-----------------------" << endl;
    }
};

int main() 
{    
    BankAccount myAccount;
    myAccount.setDetails("Alice Smith", 11223344, 5000.00);
    myAccount.display();
    return 0;
}
