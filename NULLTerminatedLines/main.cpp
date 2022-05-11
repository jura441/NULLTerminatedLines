#include<iostream>
#include<Windows.h>
using namespace std;

int StringLength(const char str[]);
void to_upper(char str[]);
void to_lower(char str[]);
void shrink(char str[]);


void main()
{
	setlocale(LC_ALL, "");
	//SetConsoleCP(1251);
	//SetConsoleOutputCP(1251);
	//char str[] = { 'H', 'e', 'l', 'l', 'o', 0};
	//char str[] = "Hello";
	//cout << str << endl;
	const int SIZE = 256;
	char str[SIZE] = {};
	cout << "Введите строку: ";
	SetConsoleCP(1251); // более надежный способ.
//cin >> str;
	cin.getline(str, SIZE);
	//SetConsoleCP(866);
	//cout << str << endl;
	cout << "Введенная строка имеет длину: " << StringLength(str) << endl;
	
	to_upper(str);
	to_lower(str);

}

int StringLength(const char str[])
{
	int i = 0;
	for (; str[i] !=0; i++);
	return i;
}

void to_upper(char str[]) 
{
	for (int i = 0; str[i]; i++)
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'));
		{
			str[i] = str[i] + 32;
		}
	}
}

void to_lower(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'));
		{
			str[i] = str[i] - 32;
		}
	}
}

void shrink(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'));
		{
			str[i] = str[i] - 32;
		}
	}
}
