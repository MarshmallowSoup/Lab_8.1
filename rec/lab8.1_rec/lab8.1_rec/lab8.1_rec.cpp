#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int Count(char* str, int i)
{

	if (str[i] != 0){
		if (str[i] == 'B' || str[i] == 'A' || 
			str[i] == 'S' || str[i] == 'I' ||
			str[i] == 'C')
			return Count(str, i + 1 ) + 1;
		else
			return Count(str, i + 1);
	}
	else
		return 0;
}
char* Change( const char* str, char* sNew,int l, int i)
{

	if(i < strlen(str))
	{
		if (str[i] == 'B' && str[i + 1] == 'A' 
			&& str[i + 2] == 'S' && 
			str[i + 3] == 'I' 
			&& str[i + 4] == 'C')
		{
			sNew[l] = 'D';
			sNew[l + 1] = 'e';
			sNew[l + 2] = 'l';
			sNew[l + 3] = 'p';
			sNew[l + 4] = 'h';
			sNew[l + 5] = 'i';
			return Change(str, sNew, l + 6, i + 5);
		}
		else
		{
			sNew[l] = str[i];
			return Change(str, sNew, l + 1, i + 1);
		}
	}
	sNew[l] = '\0';
	return sNew;
}
int main()
{
	char str[101];

	char* sNew = new char[(strlen(str)) + 1];
	cout << "Enter string:" << endl;
	cin.getline(str, 100);
	cout << "String contained " << Count(str, 0) << "  letters from word BASIC" << endl;

	sNew = Change(str, sNew, 0, 0);
	cout << "Modified string (param) : " << str << endl;
	cout << "Modified string (result): " << sNew  << endl;
	return 0;
}
