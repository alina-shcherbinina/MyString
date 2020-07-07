#include <iostream>
#include <cstring>
#include "pch.h"
#include "class string.h"


using namespace std;

MyString::MyString()
{
	Str = 0;
	Length = 0;
}

MyString::MyString(const char* ptr)	: Length(strlen(ptr)), Str(new char[Length + 1])
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