#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int forbiddenNumber = 5;
	int userInput = 0;
	while (userInput != forbiddenNumber) {
		cout << "Enter a number that isn't 5" << endl;
		cin >> userInput;
		if (userInput == forbiddenNumber) {
			cout << "Hey! You weren't supposed to enter 5!" << endl;
			break;
		}
		else {
			continue;
		}
	}
}
