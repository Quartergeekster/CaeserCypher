#pragma warning (disable: 4996)
#include <iostream>
#include <string>
#include "BaseFns.h"

using namespace std;


int main() {
	Welcome();
	string InputText = GetMessage();
	cout << "Your message was: " << InputText << endl;
	char * InputArray = ConvertStringToChar(InputText);
	int CypherKey = GetCypherValue();
	string EncryptedMessage = EncryptMessage(InputArray, CypherKey, InputText.length());
	cout << "Your encrypted message is: " << EncryptedMessage << endl;
	cin.ignore();
	system("PAUSE");
};

string GetMessage(){
	string message;
	cout << "\n\nEnter your message here: ";
	getline (cin, message);
	cout << endl;
	return message;
}

char * ConvertStringToChar(string Str)
{
	char * writable = new char[Str.size() + 1];
	copy(Str.begin(), Str.end(), writable);
	writable[Str.size()] = '\0';
	return writable;
};

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
	cout << "Your cypher key was: " << CypherValue << "." << endl;
	return CypherValue;
}

string EncryptMessage(char * InitialMessage, int CypherKey, int LengthOfMessage) //This will either need to return a string or a char
{
	string EncryptedMessage;
	for (int i = 0; InitialMessage[i] != '\0'; i++)
	{
		for (int j = 0; j<51 ; j++)
		{
			if (InitialMessage[i] == Alphabet[j])
			{
				//cout << "Initial message letter " << InitialMessage[i] << " match found at Alphabet array position " << (j + 1) << "." << endl;
				//cout << "Matched letter from alphabet was " << Alphabet[j] << "." << endl;
				EncryptedMessage += EncryptLetter(LengthOfMessage, CypherKey, j);
			}
		}
		if (isspace(InitialMessage[i]))
		{
			EncryptedMessage += ' ';
		}

		if (isdigit(InitialMessage[i]))
		{
			EncryptedMessage += InitialMessage[i];
		}
	}
	//cout << "\n\nEncrypted message is: " << EncryptedMessage << endl;
	return EncryptedMessage;
}

char EncryptLetter(int LengthOfMessage, int CypherKey, int PosInAlphabet)
{
	if (PosInAlphabet + CypherKey > 51)
	{
		return Alphabet[(PosInAlphabet + CypherKey)%52];
	}
	else
	{
		return Alphabet[PosInAlphabet + CypherKey];
	}
}