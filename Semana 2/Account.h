#include <string>
#include <iostream>

class Account {
public:
    Account(std::string account_name, int initial_balance)
        : name{account_name} {

        if (initial_balance > 0) {
            balance = initial_balance;
        }

    }
    void deposit(int deposit_amount) {
        if (deposit_amount > 0) {
            balance = balance + deposit_amount;
        }
    }

    int get_balance() const {
        return balance;
    }

    void set_name(std::string account_name) {
        name = account_name;
    }

    std::string get_name() const {
        return name;
    }

    void withdraw(int withdraw_amount) {
        if (withdraw_amount < balance) {
            balance = balance - withdraw_amount;
        }
        else{
            std::cout << "\nYour balance is insufficient for a withdrawal." << std::endl;
        }

    }

    void withdraw2(int withdraw_amount2) {
        if (withdraw_amount2 < balance) {
            balance = balance - withdraw_amount2;
        }
        else{
            std::cout << "\nYour balance is insufficient for a withdrawal." << std::endl;
        }

    }
private:
std::string name;
int balance{0};
};