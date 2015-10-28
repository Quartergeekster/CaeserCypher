
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
	while (CypherKey <=0)
	{
		CypherKey = GetCypherValue();
		if (CypherKey <= 0)
		{
			cout << "That is not a valid number, please enter a positive number\n";
		}
	}
	string EncryptedMessage = EncryptMessage(InputArray, CypherKey, InputText.length());
	cout << "Your encrypted message is: " << EncryptedMessage << endl;
	cin.ignore();
	system("PAUSE");
};

