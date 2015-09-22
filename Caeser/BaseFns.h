#include <iostream>
using namespace std;


char Alphabet[52] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
//char Numbers[10] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };

void Welcome() {
	cout << "\t\tWelcome to the Caeser cypher program\n\n\tA quick and easy method for encoding a message" << endl;
};

string GetMessage();

char * ConvertStringToChar(string Str);

int GetCypherValue();

string EncryptMessage(char * InitialMessage, int CypherKey, int LengthOfMessage);

char EncryptLetter(int, int, int);
