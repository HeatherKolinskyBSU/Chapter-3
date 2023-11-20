#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() // Starts main function.
{
	int forbiddenNumber = 5;
	int userInput = 0;
	// Initialises The Forbidden Number and the user input.
	// These will be used later.
	while (userInput != forbiddenNumber) {
		cout << "Enter a number that isn't 5" << endl;
		cin >> userInput;
		// Create a while loop that executes whilst the user
		// input and The Forbidden Number are not equal.
		// Ask the user to input any other number than 5.
		if (userInput == forbiddenNumber) {
			cout << "Hey! You weren't supposed to enter 5!" << endl;
			break;
			// You fool. You entered The Forbidden Number.
		}
		else {
			continue;
			// Continues the loop if 5 is not entered.
		}
	}
	return(0);
}          // Ends main function.
