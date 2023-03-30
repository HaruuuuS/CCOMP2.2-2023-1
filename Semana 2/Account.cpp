#include <iostream>
#include "Account.h"


int main()
{
    Account account1{"Jane Green", 50};
    Account account2{"John Blue", -7};

    std::cout << "Account 1: " << account1.get_name() << " has a balance of $" << account1.get_balance() << std::endl;
    std::cout << "Account 2: " << account2.get_name() << " has a balance of $" << account2.get_balance();

    std::cout << "\n\nEnter deposit amount for account 1: ";
    int depositAmount;
    std::cin >> depositAmount;

    std::cout << "adding $" << depositAmount << " to account 1 balance $";
    account1.deposit(depositAmount);

    std::cout << "\n\nAccount 1: " << account1.get_name() << " has a balance of $" << account1.get_balance();
    std::cout << "\nAccount 2: " << account2.get_name() << " has a balance of $" << account2.get_balance();

    std::cout << "\n\nEnter deposit amount for account 2: ";
    std::cin >> depositAmount;
    std::cout << "adding $" << depositAmount << " to account 2 balance $";
    account2.deposit(depositAmount);

    std::cout << "\n\nAccount 1: " << account1.get_name() << " has a balance of $" << account1.get_balance(); 
    std::cout << "\nAccount 2: " << account2.get_name() << " has a balance of $" << account2.get_balance() << std::endl; 

    std::cout << "\nEnter amount to withdraw from account 1 please: ";
    int withdrawAmount;
    std::cin >> withdrawAmount;
    std::cout << "Withdrawing $" << withdrawAmount << " from account 1: ";
    account1.withdraw(withdrawAmount);

    std::cout << "\nEnter amount to withdraw from account 2 please: ";
    int withdrawAmount2;
    std::cin >> withdrawAmount2;
    std::cout << "Withdrawing $" << withdrawAmount2 << " from account 2: ";
    account2.withdraw2(withdrawAmount2);

    std::cout << "\n\nAccount 1: " << account1.get_name() << " has a balance of $" << account1.get_balance();
    std::cout << "\nAccount 2: " << account2.get_name() << " has a balance of $" << account2.get_balance() << std::endl; 

    return 0;
}
