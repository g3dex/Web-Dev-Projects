// Declaration of the class CheckingAccount.

#include <iostream>
using namespace std;

// To Do: include any necessary headers


// To Do: Protect from multiple declarations of CheckingAccount.


//Class for a CheckingAccount which is derived from BankAccount.
class
{
public:
	// To Do: declare three constructors like SavingAccount except use
	// a check_fee instead of an interest_rate


	// To Do: declare a constructor that takes dollar, cents and fee
    //Initializes the account balance to $dollars.cents and the check fee to fee.


	// To Do: declare a constructor that takes dollar, cents and fee
    //Initializes the account balance to $dollars.00 and check fee to the fee.


	// To Do: declare a default constructor
    //Initializes the account balance to $0.00 and the check fee to $0.00.


    // To Do: define an accessor for the check fee
    //Returns the check fee.


	// To Do: redefine the output function to include the check fee.


    //Precondition: If outs is a file output stream, then outs has already been
    //connected to a file.
    //Postcondition: balance and check fee have been written to the stream outs.
 

	// To Do: redefine the input function to include the check fee.


    //Precondition: If ins is a file input stream, then ins has already been
    //connected to a file.
    //Postcondition: balance and check fee have been read from the stream ins.


	// To Do: declare a check function that behaves like withdraw but charges
	// the check fee too.


    // Precondition: dollars and cents must be greater or equal to 0.
    // Dollars and cents be less than or equal to balance.
    // Postcondition: increase the balance by the dollars and cents
    // plus the fee. 

private:
    // To Do: additional data member(s)

};

