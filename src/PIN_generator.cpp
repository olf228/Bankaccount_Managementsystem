/**
 *  This code is owned by Florian Meier
 */

#include <ctime>
#include <cstdlib>
#include "../include/Bankaccount_Managementsystem/PIN_generator.hpp"

PIN_generator::PIN_generator()
{
    PIN = 0;                                            
}

void PIN_generator::generatePin()
{
    PIN = 0;                                            // Reset PIN

    for(uint8_t i = 1; i <= 1000; i *= 10)              // Since the PIN must have 4 digits 
    {
        std::srand(std::time(0));                       // Use current time as seed for random generator
        uint8_t random = std::rand() % 10;              // Get a number between 0 and 9 from the random number       

        PIN += random * i;                              // Apply decimal factor to get a 4 digit PIN
    }    
}

uint8_t PIN_generator::getPIN()
{
    return PIN;
}