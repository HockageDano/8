#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
using std::cout;
using std::endl;

void Change(char* s)
{
	int i = 0;
	int count = 0;
	int index = 0;
	for (int i = 0; i < strlen(s) - 1; i++)
	{
		if (s[i] == ',' && s[i] == '**')
		{
			if (count != 3)
			{
				count++;
				index = i;
			}

		}

	}
}
void Count(char* s)

{
	int count = 0;
	int index = 0;
	for (int i = 0; i < strlen(s) - 1; i++)
	{
		if (s[i] == ',')
		{
			if (count != 3)
			{
				count++;
				index = i;
			}
			
	     }
		
	}
	if (count == 3) {
		cout << "The third koma is number :" << index << endl;
	}
	else {
		cout << "Koma is not found" << index << endl;
	}
}

int main()
{ 
	char str[101];
	cout << "Enter string:" << endl;
	cin.getline(str, 100);
	Count(str);
	Change(str);
	char* dest = new char[151];
	//dest = Change(str);
	//cout << "Modified string (param) : " << str << endl;
	//cout << "Modified string (result): " << dest << endl;
	return 0;
}
