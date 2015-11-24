#include <iostream>
#include <string>
#include "BaseFns.h"

using namespace std;


int main() {
	Welcome();
	int choice = 99;
	while (choice != 0)
	{
		choice = MenuChoice();
		switch (choice)
		{
		case(1) :
			cout << "Case 1" << endl;
			break;
		case(2) :
			cout << "Case 2" << endl;
			break;
		case(0) :
			cout << "Exit selected" << endl;
			break;
		default:
			cout << "Not a valid option\n";
			break;
		}

	}
	//string InputText = GetMessage();
	//cout << "Your message was: " << InputText << endl;
	//char * InputArray = ConvertStringToChar(InputText);
	//int CypherKey = 0;
	//while (CypherKey ==0)
	//{
	//	CypherKey = GetCypherValue();
	//}
	//string EncryptedMessage = EncryptMessage(InputArray, CypherKey, InputText.length());
	//cout << "Your encrypted message is: " << EncryptedMessage << endl;
	cin.ignore();
	system("PAUSE");
};

int MainInput()
{
	string InputText = GetMessage();
	char * InputArray = ConvertStringToChar(InputText);
	int CypherKey = 0;
	while (CypherKey ==0)
	{
		CypherKey = GetCypherValue();
	}
	return 0;
}

