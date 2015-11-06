#include <iostream>
#include <string>
#include "BaseFns.h"

using namespace std;


int main() {
	Welcome();
	string InputText = GetMessage();
	cout << "Your message was: " << InputText << endl;
	char * InputArray = ConvertStringToChar(InputText);
	int CypherKey = 0;
	if (CypherKey ==0)
	{
		CypherKey = GetCypherValue();
	}
	string EncryptedMessage = EncryptMessage(InputArray, CypherKey, InputText.length());
	cout << "Your encrypted message is: " << EncryptedMessage << endl;
	cin.ignore();
	system("PAUSE");
};

