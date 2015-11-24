#include <iostream>
using namespace std;


void Welcome() {
	cout << "\t\tWelcome to the Caeser cypher program\n\n\tA quick and easy method for encoding a message\n" << endl;
};

string GetMessage();

char * ConvertStringToChar(string Str);

int GetCypherValue();

string EncryptMessage(char * InitialMessage, int CypherKey, int LengthOfMessage);

char EncryptLetter(int, int, int);

int MenuChoice();
