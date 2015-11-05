//Files used for encryption and decryption

#pragma warning (disable: 4996)
#include <iostream>
#include <string>

using namespace std;

char * ConvertStringToChar(string Str)
{
	char * writable = new char[Str.size() + 1];
	copy(Str.begin(), Str.end(), writable);
	writable[Str.size()] = '\0';
	return writable;
};