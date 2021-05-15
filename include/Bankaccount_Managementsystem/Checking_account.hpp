/**
 *  This code is owned by Florian Meier
 */

#include <string>
#include "Basic_account.hpp"

/* Typedef for inttypes */
typedef unsigned char uint8_t; 
typedef unsigned short uint16_t;
typedef signed int sint32_t;

class Checking_account : public Basic_account
{
    private:
        uint8_t pin;                                                         // Access pin 
        uint16_t overdraft;                                                  // Amount of possible overdraft

    public:
        uint8_t setOverdraft(uint16_t overdraft);                            // Setter for the overdraft
        uint16_t getOverdraft();                                             // Getter for the overdraft     

        Checking_account();                                                                      // Default constructor
        Checking_account(std::string IBAN);                                                      // Overloaded constructor with "IBAN" parameter
        Checking_account(std::string IBAN, uint16_t overdraft);                                  // Overloaded constructor with "IBAN" and "overdraft" parameter
        Checking_account(std::string IBAN, uint16_t overdraft, sint32_t initial_balance);        // Overloaded constructor with "IBAN", "overdraft" and "initial_balance" option

        ~Checking_account();                                                                     // Destructor    
};