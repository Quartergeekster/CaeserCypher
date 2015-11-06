//Files used for encryption and decryption

#pragma warning (disable: 4996)
#include <iostream>
#include <string>
#include "CypherHead.h"

using namespace std;

char * ConvertStringToChar(string Str)
{
	char * writable = new char[Str.size() + 1];
	copy(Str.begin(), Str.end(), writable);
	writable[Str.size()] = '\0';
	return writable;
};

char EncryptLetter(int LengthOfMessage, int CypherKey, int PosInAlphabet)
{
	if (PosInAlphabet + CypherKey > abs(51))
	{
		return Alphabet[(PosInAlphabet + CypherKey) % 52];
	}
	return Alphabet[PosInAlphabet + CypherKey];
}