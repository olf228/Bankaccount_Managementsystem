/**
 *  This code is owned by Florian Meier
 */

typedef unsigned char uint8_t;

class PIN_generator
{
    private:
        uint8_t PIN;                // Generated PIN

    public:
        void generatePin();         // Generate PIN according to current time
        uint8_t getPIN();           // Getter for generated PIN

        PIN_generator();            // Default constructor
        ~PIN_generator();           // Destructor
};