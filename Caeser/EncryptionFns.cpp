#pragma warning (disable: 4996)
#include <iostream>
#include <string>

using namespace std;

char Alphabet[52] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };

char EncryptLetter(int, int, int);

char * ConvertStringToChar(string Str)
{
	char * writable = new char[Str.size() + 1];
	copy(Str.begin(), Str.end(), writable);
	writable[Str.size()] = '\0';
	return writable;
};

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
				//cout << "Initial message letter " << InitialMessage[i] << " match found at Alphabet array position " << (j + 1) << "." << endl;
				//cout << "Matched letter from alphabet was " << Alphabet[j] << "." << endl;
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

char EncryptLetter(int LengthOfMessage, int CypherKey, int PosInAlphabet)
{
	if (PosInAlphabet + CypherKey > 51)
	{
		return Alphabet[(PosInAlphabet + CypherKey) % 52];
	}
	else
	{
		return Alphabet[PosInAlphabet + CypherKey];
	}
}