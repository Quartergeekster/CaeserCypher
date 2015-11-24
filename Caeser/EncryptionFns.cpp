#pragma warning (disable: 4996)
#include <iostream>
#include <string>
#include "CypherHead.h"

using namespace std;

string EncryptMessage(char * InitialMessage, int CypherKey, int LengthOfMessage)
{
	bool Replaced;
	string EncryptedMessage;
	for (int i = 0; InitialMessage[i] != '\0'; i++)
	{
		Replaced = false;
		for (int j = 0; j<51; j++)
		{
			if (InitialMessage[i] == Alphabet[j])
			{
				EncryptedMessage += EncryptLetter(LengthOfMessage, CypherKey, j);
				Replaced = true;
			}
		}
		if (isspace(InitialMessage[i]))
		{
			EncryptedMessage += ' ';
			Replaced = true;
		}

		if (isdigit(InitialMessage[i]))
		{
			EncryptedMessage += InitialMessage[i];
			Replaced = true;
		}

		if (Replaced == false)
		{
			EncryptedMessage += InitialMessage[i];
			Replaced = true;
		}
	}
	//cout << "\n\nEncrypted message is: " << EncryptedMessage << endl;
	return EncryptedMessage;
}