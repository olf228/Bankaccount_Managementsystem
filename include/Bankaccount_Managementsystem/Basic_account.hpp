/**
 *  This code is owned by Florian Meier
 */

#include <string>

class Basic_account{

    private:
        int balance;                        // Current balance of money
        std::string IBAN;                   // International Bank account number

    public:
        int getBalance();                   // Getter for account balance
        int withdraw(float amount);         // Withdraw monney from the account's balance
        int deposit(float amount);          // Deposit money to the account's balance

        
};