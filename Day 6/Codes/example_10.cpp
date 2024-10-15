#include <iostream>
#include <string>
using namespace std;

// Class Customer to hold personal details
class Customer {
private:
    string name;
    int customerID;

public:
    // Constructor to initialize customer details
    Customer() {
        name = "";
        customerID = 0;
    }

    Customer(string custName, int id) {
        name = custName;
        customerID = id;
    }

    // Function to set customer details
    void setCustomerDetails(string custName, int id) {
        name = custName;
        customerID = id;
    }

    // Function to display customer details
    void displayCustomerDetails() {
        cout << "Customer Name: " << name << endl;
        cout << "Customer ID: " << customerID << endl;
    }
};

// Class Account to hold account details
class Account {
private:
    double balance;

public:
    // Constructor to initialize account balance
    Account() {
        balance = 0.0;
    }

    Account(double initialBalance) {
        balance = initialBalance;
    }

    // Function to set account balance
    void setAccountBalance(double initialBalance) {
        balance = initialBalance;
    }

    // Function to display account balance
    void displayBalance() {
        cout << "Account Balance: $" << balance << endl;
    }

    // Function to get the current balance
    double getBalance() {
        return balance;
    }

    // Function to deposit money into the account
    void deposit(double amount) {
        balance += amount;
    }

    // Function to withdraw money from the account
    bool withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            return true;
        } else {
            cout << "Insufficient balance!" << endl;
            return false;
        }
    }
};

// Base class RBI to set guidelines for all banks
class RBI {
protected:
    Customer customer;
    Account account;
    static const double minInterestRate;  // Minimum interest rate set by RBI
    static const double maxWithdrawalLimit;  // Maximum withdrawal limit set by RBI

public:
    // Constructor to initialize customer and account details
    RBI() {}

    RBI(string name, int id, double initialBalance) {
        customer.setCustomerDetails(name, id);
        account.setAccountBalance(initialBalance);
    }

    // Function to get the minimum interest rate
    virtual double getInterestRate() {
        return minInterestRate;
    }

    // Function to get the maximum withdrawal limit
    virtual double getWithdrawalLimit() {
        return maxWithdrawalLimit;
    }

    // Function to display all details
    void displayDetails() {
        customer.displayCustomerDetails();
        account.displayBalance();
    }

    // Function to handle deposits
    void depositMoney(double amount) {
        account.deposit(amount);
        cout << "Deposited $" << amount << " successfully." << endl;
    }

    // Function to handle withdrawals
    void withdrawMoney(double amount) {
        if (amount > getWithdrawalLimit()) {
            cout << "Withdrawal exceeds RBI limit of $" << getWithdrawalLimit() << "!" << endl;
        } else {
            if (account.withdraw(amount)) {
                cout << "Withdrawal of $" << amount << " successful." << endl;
            }
        }
    }
};

// RBI Guidelines
const double RBI::minInterestRate = 4.0;
const double RBI::maxWithdrawalLimit = 50000;

// Derived class SBI from RBI
class SBI : public RBI {
public:
    // Constructor to initialize SBI-specific customer and account
    SBI(string name, int id, double initialBalance) {
        customer.setCustomerDetails(name, id);
        account.setAccountBalance(initialBalance);
    }

    // Override to set SBI's own interest rate
    double getInterestRate() override {
        return 4.5;  // SBI sets its interest rate higher than RBI's minimum
    }

    // Override to set SBI's withdrawal limit
    double getWithdrawalLimit() override {
        return 40000;  // SBI sets a lower withdrawal limit
    }
};

// Derived class ICICI from RBI
class ICICI : public RBI {
public:
    // Constructor to initialize ICICI-specific customer and account
    ICICI(string name, int id, double initialBalance) {
        customer.setCustomerDetails(name, id);
        account.setAccountBalance(initialBalance);
    }

    // Override to set ICICI's own interest rate
    double getInterestRate() override {
        return 5.0;  // ICICI offers a higher interest rate
    }

    // Override to set ICICI's withdrawal limit
    double getWithdrawalLimit() override {
        return 45000;  // ICICI sets a different withdrawal limit
    }
};

// Derived class PNB from RBI
class PNB : public RBI {
public:
    // Constructor to initialize PNB-specific customer and account
    PNB(string name, int id, double initialBalance) {
        customer.setCustomerDetails(name, id);
        account.setAccountBalance(initialBalance);
    }

    // Override to set PNB's own interest rate
    double getInterestRate() override {
        return 4.0;  // PNB follows RBI's minimum interest rate
    }

    // Override to set PNB's withdrawal limit
    double getWithdrawalLimit() override {
        return 50000;  // PNB adheres to RBI's maximum withdrawal limit
    }
};

int main() {
    // Creating SBI bank customer
    SBI sbiCustomer("John Doe", 101, 100000);
    cout << endl <<  "SBI Customer Details:" << endl;
    sbiCustomer.displayDetails();
    cout << "Interest Rate: " << sbiCustomer.getInterestRate() << "%" << endl;
    cout << "Withdrawal Limit: $" << sbiCustomer.getWithdrawalLimit() << endl;
    sbiCustomer.withdrawMoney(30000);
    sbiCustomer.depositMoney(5000);
    sbiCustomer.withdrawMoney(45000);  // Exceeds SBI limit

    // Creating ICICI bank customer
    ICICI iciciCustomer("Jane Smith", 102, 150000);
    cout << endl << "ICICI Customer Details:" << endl;
    iciciCustomer.displayDetails();
    cout << "Interest Rate: " << iciciCustomer.getInterestRate() << "%" << endl;
    cout << "Withdrawal Limit: $" << iciciCustomer.getWithdrawalLimit() << endl;
    iciciCustomer.withdrawMoney(35000);
    iciciCustomer.depositMoney(10000);

    // Creating PNB bank customer
    PNB pnbCustomer("Alice Johnson", 103, 200000);
    cout << endl <<  "PNB Customer Details:" << endl;
    pnbCustomer.displayDetails();
    cout << "Interest Rate: " << pnbCustomer.getInterestRate() << "%" << endl;
    cout << "Withdrawal Limit: $" << pnbCustomer.getWithdrawalLimit() << endl;
    pnbCustomer.withdrawMoney(50000);  // Hits maximum withdrawal limit

    return 0;
}
