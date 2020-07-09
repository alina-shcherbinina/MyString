#include <iostream>
#include <cstring>
#include <string>
#include "pch.h"
#include "class string.h"


using namespace std;

MyString::MyString() 
{
	Str = 0;
	Length = 0;
}

MyString::MyString(const char* ptr) : Length(strlen(ptr)), Str(new char[Length + 1])
{
	strcpy(Str, ptr);
}

MyString::MyString(const MyString& t) : Length(strlen(t.Str)), Str(new char[Length + 1])
{
	strcpy(Str, t.Str);
}

MyString& MyString::operator += (const MyString& t)
{
	int newLength = Length + t.Length;
	char *newStr = new char[newLength + 1];
	strcpy(newStr, Str);
	strcat(newStr, t.Str);
	delete[] Str;
	Str = newStr;
	Length = newLength;
	return *this;
}

const char* MyString::getStr() const
{
	return Str;
}

int MyString::getLength() const
{
	return Length;
}

int MyString::getSentences() const
{
	int count = 0;
	for (int i = 0; i < Length; i++)
	{
		if ((Str[i] == '.') || (Str[i] == '!') || (Str[i] == '?')) 
			count++;
	}
	return count;
}

int MyString::getArticles() const
{
	char * pch;
	int count = 0;
	
	char *newStr = new char[Length]; 
	strcpy(newStr, Str);
	pch = strtok(newStr, " ,.-?!");
	
	while (pch != NULL)
	{
		int result = strcmp(pch, "a");
		int result2 = strcmp(pch, "the"); // havent found a great solution so went with this so sorry 
		if ((result == 0) || (result2 == 0)) {
			count++;
		}
		pch = strtok(NULL, " ,.-?!");
	}

	return count;
}

int MyString::search(string Sub)
{
	string str(Str);
	int start = 0;
	int count = 0;
	int pos = 0;
	for (;;) { 
		pos = str.find(Sub.c_str(), start); // finds substring
		if (pos != -1) { // checks position 
			start = pos + Sub.size();
			count++;
		}
		else {
			break;
		}
	}
	return count;
}

int MyString::breakApart() const
{
	char * pch;
	char *newStr = new char[Length]; // copy mystr so it would break the initial mystring
	strcpy(newStr, Str);
	pch = strtok(newStr, " ,.-?!"); // split string into tokens
	while (pch != NULL)
	{
		printf("%s\n", pch);
		pch = strtok(NULL, " ,.-?!");
	}

	return 0;
}

int MyString::getWords() const
{
	char * pch;
	int count = 0;
	char *newStr = new char[Length];
	strcpy(newStr, Str);
	pch = strtok(newStr, " ,.-?!");
	while (pch != NULL)
	{
		count++;
		pch = strtok(NULL, " ,.-?!");
	}

	return count;
}

ostream & MyString::show(ostream & os) const
{
	return os << "\"" << (Str ? Str : "") << "\"";
}

MyString::~MyString()
{
	Length = 0;
	delete[] Str;
	Str = 0;
}