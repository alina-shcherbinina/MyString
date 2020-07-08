#pragma once
#ifndef CLASS_STRING_H
#define CLASS_STRING_H
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <regex>
#include <cstring>
using namespace std;

class MyString
{
protected:
	int Length;
	char* Str;

public:
	MyString();
	MyString(const char* ptr);
	MyString(const MyString& t);
	
	MyString& operator += (const MyString& t);
	
	const char* getStr() const;
	
	int getLength() const;

	int getSentences() const;

	int getArticles() const;

	int search(string Sub);

	int breakApart() const;

	int getWords() const;

	ostream & show(ostream & os) const;
	friend ostream & operator << (ostream & os, const MyString & s)
	{
		return s.show(os);
	}

	~MyString();
};

#endif