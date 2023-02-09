// Lab04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
// Print out the menu of choices for the user to select from
void printMenu() {
	cout << "Please Select which operation to perform:" << endl;
	cout << "\t1. Factorial" << endl;
	cout << "\t2. Arithmetic Series" << endl;
	cout << "\t3. Geometric Series" << endl;
	cout << "\t4. Exit" << endl;
	cout << "Your Selection: ";
}
void factorial() {
	int i;
	int result = 1; 
	cout << "enter: " << endl;
	cin >> i;
	while (i < 0) {
		cout << "Nice try, please enter a POSITIVE number..." << endl;
	    cin >> i;
	}
	for (int n = 1; n <= i; n++) {
		result = result * n;
	}
	cout << "result = " << result << endl;
}
void arithmetic() {
	int start;
	int add;
	int series;
	cout << "Enter a number start at:" << endl;
	cin >> start;
	cout << "Enter a number to add each time:" << endl;
	cin >> add;
	cout << "Enter the number of elements in the series:" << endl;
	cin >> series;
	int result = start;
	for (int n = 1; n <series; n++) {
		start = start + add;
		result = start + result;
	}
	cout << result;
}
void geometric() {
	int start;
	int mul;
	int series;
	cout << "Enter a number start at:" << endl;
	cin >> start;
	cout << "Enter a number to multiply each time:" << endl;
	cin >> mul;
	cout << "Enter the number of elements in the series:" << endl;
	cin >> series;
	int result = start;
	for (int n = 1; n < series; n++) {
		start = start * mul;
		result = start + result;
	}
	cout << result;
}
int main() {
	int choice;
	char again;
	do {
		printMenu();
		cin >> choice;
		// Quit if user chooses to exit (or any invalid choice)
		if (choice > 3 || choice < 1) {
			return 0;
		}
		else if (choice == 1) {
			factorial();
		}
		else if (choice == 2) {
			arithmetic();
		}
		else if (choice == 3) {
			geometric();
		}
		cout << "Go Again? [Y/N] ";
		cin >> again;
	} while (again == 'y' || again == 'Y');
}
