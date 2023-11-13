#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {                                                    // Begins main function
	cout << "Counting from 0 to 50 with a 'for' loop:" << endl;
	for (int countTo50 = 0; countTo50 <= 50; countTo50++) {
		cout << countTo50 << endl;
	}
	// Using a 'for' loop, the program first defines the initial value as 0. 
	// It then tells the program that, for as long as the value is less than
	// OR equal to the value of 50, to increase the value by 1 and output that
	// value to the screen.

	cout << " " << endl;
	cout << "Counting from 50 to 0 with a 'for' loop:" << endl;
	for (int countTo0 = 50; countTo0 >= 0; countTo0--) {
		cout << countTo0 << endl;
	}
	// Using a 'for' loop, the program first defines the initial value as 50. 
    // It then tells the program that, for as long as the value is more than
    // OR equal to the value of 0, to decrease the value by 1 and output that
    // value to the screen.
}                                                               // Ends main function
