#include <iostream>
using namespace std;


int MenuChoice()
{
	int choice;
	cout << "Please enter a menu choice:\n\t1: Encrypt a sentence using a standard Caeser Cypher\n\t2: Decrypt a standard Caeser Cypher\n\t0: Quit" << endl;
	cin >> choice;
	return choice;
}

void Welcome() {
	cout << "\t\tWelcome to the Caeser cypher program\n\n\tA quick and easy method for encoding a message\n" << endl;
};