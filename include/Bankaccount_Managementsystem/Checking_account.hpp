/**
 *  This code is owned by Florian Meier
 */

#include "Basic_account.hpp"

/* Typedef for inttypes */
typedef unsigned char uint8_t; 
typedef unsigned short uint16_t;

class Checking_account : public Basic_account{

    private:
        uint8_t pin;                                        // Access pin 
        uint16_t overdraft;                                 // Amount of possible overdraft

    public:
        uint8_t setOverdraft(uint16_t overdraft);           // Setter for the overdraft
        uint16_t getOverdraft();                            // Getter for the overdraft        
        Checking_account();                                 // Contructor
        ~Checking_account();                                // Destructor    
};