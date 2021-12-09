#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int Count(char* str)
{
	
	int k = 0;
	for (int i = 0; str[i] != 0; i++)
		if (str[i] == 'B' 
			|| str[i] == 'A' || str[i] == 'S' || str[i] == 'I' || str[i] == 'C')
			k++;
	return k;
}

char* change(char* str) {
	char* sNew = new char[(strlen(str)) * 6/5 + 1];
	size_t l = 0;
	for (size_t i = 0; i < strlen(str); i++)
	{
		if (str[i] == 'B' && str[i + 1] == 'A' && str[i + 2] == 'S' && str[i + 3] == 'I' && str[i + 4] == 'C')
		{
			sNew[l] = 'D';
			sNew[l + 1] = 'e';
			sNew[l + 2] = 'l';
			sNew[l + 3] = 'p';
			sNew[l + 4] = 'h';
			sNew[l + 5] = 'i';
			l += 6;
			i += 4;
		}
		else
		{
			sNew[l] = str[i];
			++l;
		}
	}
	sNew[l] = '\0';
	return sNew;
}

int main()
{
	char str[101];
	cout << "Enter string:" << endl;
	cin.getline(str, 100);
	cout << "String contained " << Count(str) << " letters from word BASIC" << endl;
	char* dest = new char[151];
	dest = change(str);

	cout << "Modified string (param) : " << str << endl;

	cout << "Modified string (result): " << dest << endl; 
	return 0;
}