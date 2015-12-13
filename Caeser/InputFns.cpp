//Input Functions

#include <iostream>
#include <string>
#include "CypherHead.h"

using namespace std;

string GetMessage(){
	string message;
	cout << "\n\nEnter your message here: ";
	cin >> message;
	cout << "Your message was: " << message << endl;
	cout << endl;
	return message;
}

int GetCypherValue()
{
	int CypherValue;
	cout << "Input your cypher value: ";
	cin >> CypherValue;
	while (cin.fail())
	{
		cout << endl << "Invalid entry, please enter a number." << endl;
		cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		cout << "Input your cypher value: ";
		cin >> CypherValue;
	}
	if (CypherValue < 1)
	{
		cout << "That is not a valid number, please enter a positive number\n";
	}
	cout << "Your cypher key was: " << CypherValue << "." << endl;
	return CypherValue;
}

int GetDecryptValue()
{
	int DecryptValue;
	cout << "Input your original cypher key: ";
	cin >> DecryptValue;
	while (cin.fail())
	{
		cout << endl << "Invalid entry, please enter a number." << endl;
		cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		cout << "Input your original cypher key: ";
		cin >> DecryptValue;
	}
	if (DecryptValue <= 1)
	{
		cout << "That is not a valid number, please enter a positive number\n";
	}
	cout << "Your cypher key was: " << DecryptValue << "." << endl;
	return DecryptValue;
}