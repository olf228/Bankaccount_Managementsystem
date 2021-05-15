/**
 *  This code is owned by Florian Meier
 */

#include "../include/Bankaccount_Managementsystem/Checking_account.hpp"
#include "../include/Bankaccount_Managementsystem/PIN_generator.hpp"
#include <iostream>


typedef unsigned short uint16_t;

Checking_account::Checking_account()
{
    std::cout << "No IBAN was defined! No account created!" << std::endl;
    this->~Checking_account();
}

Checking_account::Checking_account(std::string IBAN)
{
    this->IBAN = IBAN;
    this->overdraft = 0;

    /* Generate a PIN and assign it to object variable */
    PIN_generator pin_generator;                            // Create a PIN generator object
    pin_generator.generatePin();                            // Generate a PIN
    this->pin = pin_generator.getPIN();                     // Get the generated PIN and write it to the account object
    pin_generator.~PIN_generator();                         // Destruct the PIN generator   
}

Checking_account::Checking_account(std::string IBAN, uint16_t overdraft)
{
    this->IBAN = IBAN;
    this->overdraft = overdraft;
    this->balance = 0;

    /* Generate a PIN and assign it to object variable */
    PIN_generator pin_generator;                            // Create a PIN generator object
    pin_generator.generatePin();                            // Generate a PIN
    this->pin = pin_generator.getPIN();                     // Get the generated PIN and write it to the account object
    pin_generator.~PIN_generator();                         // Destruct the PIN generator   
}

Checking_account::Checking_account(std::string IBAN, uint16_t overdraft, sint32_t initial_balance)
{
    this->IBAN = IBAN;
    this->overdraft = overdraft;
    this->balance = initial_balance;

    /* Generate a PIN and assign it to object variable */
    PIN_generator pin_generator;                            // Create a PIN generator object
    pin_generator.generatePin();                            // Generate a PIN
    this->pin = pin_generator.getPIN();                     // Get the generated PIN and write it to the account object
    pin_generator.~PIN_generator();                         // Destruct the PIN generator   
}