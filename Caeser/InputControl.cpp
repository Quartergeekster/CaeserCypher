#include <iostream>
#include <string>
#include "BaseFns.h"

using namespace std;

void MainInput(int choice)
{
	if (choice == 1)
	{
		int CypherKey = 0;
		string ToBeEncrypted = GetMessage();
		char * InputArray = ConvertStringToChar(ToBeEncrypted);
		while (CypherKey == 0)
		{
			CypherKey = GetCypherValue();
		}
		string EncryptedMessage = EncryptMessage(InputArray, CypherKey, ToBeEncrypted.length());
		cout << "\n" << endl;
		cout << "your encrypted message is: " << EncryptedMessage << "\n\n" << endl;;
	}
}