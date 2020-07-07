#include "pch.h"
#include <iostream>
#include <conio.h>
#include <cstring>
#include "class string.h" 
using namespace std;

int main()
{
	MyString b("What a stupid lamb. ");
	MyString e("What a sick, masochistic lion. ");
	cout << "Class String! \n" << endl;
	cout << b << "\n length:" << b.getLength() << "\n Num. of sentences:" << b.getSentences() << endl; //done works
	cout << e << "\n length:" << e.getLength() << "\n Num. of sentences:" << e.getSentences() << endl; //done works
	b += e;
	cout << "Copy and add other string: \n" << b << endl; // done works
	string l="lion";
	cout << "Search " << l << " in a string \n" << b.search(l) << endl; // done works 
	string a = " a ";
	cout << "Num. of articles in a string: \n" << b.getArticles() << endl; //not done
	cout << "Break into parts using , " << endl;// not done 

	return 0;
}