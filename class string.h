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
	
	MyString& operator += (const MyString& t); //copy and add
	
	const char* getStr() const; // mystring into char
	
	int getLength() const; // the length of mystring 

	int getSentences() const; // counts parts of mystring that ends with . ? !

	int getArticles() const; // counts atricles "the" and "a'

	int search(string Sub); // search a substung in a string a.search(substring)

	int breakApart() const; // breaks apart mystring into seprate words

	int getWords() const; // counts words in mystring

	ostream & show(ostream & os) const; //out
	friend ostream & operator << (ostream & os, const MyString & s)
	{
		return s.show(os);
	}

	~MyString(); //destructor 
};

#endif