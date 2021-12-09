#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;


int Count(char* s, const char* cs)
{
	int k = 0,
		pos = 0;
	char* t;
	while (t = strpbrk(s + pos, cs))
	{
		pos = t - s + 1;
		k++;
	}
	return k;
}
char* change(char* s) {
	char* sNew = new char[(strlen(s)) * 6 / 5 + 1];
	size_t l = 0;
	for (size_t i = 0; i < strlen(s); i++)
	{
		if (s[i] == 'B' && s[i + 1] == 'A' && s[i + 2] == 'S' && s[i + 3] == 'I' && s[i + 4] == 'C')
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
			sNew[l] = s[i];
			++l;
		}
		sNew[l] = '\0';
	}
	return sNew;
}

int main()
{
	char cs[6] = "BASIC";
	char str[101];
	cout << "Enter string:" << endl;
	cin.getline(str, 100);
	cout << "String contained " << Count(str,cs) << " letters from word BASIC" << endl;
	char* dest = new char[151];
	dest = change(str);

	cout << "Modified string (param) : " << str << endl;

	cout << "Modified string (result): " << dest << endl;
	return 0;
}

