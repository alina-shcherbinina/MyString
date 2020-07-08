#include "pch.h"
#include <iostream>
#include <conio.h>
#include <cstring>
#include "class string.h" 
using namespace std;

int main()
{
	MyString b("What a stupid lamb. ");
	MyString e("What a sick, masochistic lion.");
	cout << "Class MyString! \n" << endl;
	cout << b << endl;
	cout<< " char length:" << b.getLength() << "\n Num. of words: " << b.getWords() << "\n Num. of sentences:" << b.getSentences() << endl; //done works
	cout << e << endl;
	cout << " char length:" << e.getLength() << "\n Num. of words: " << e.getWords() << "\n Num. of sentences:" << e.getSentences() << endl; //done works
	b += e;
	cout << "Copy and add other string: \n" << b << endl; // done works
	//cout << "Num. of articles in a string: \n" << b.getArticles() << endl; //not done
	string l = "lion";
	cout << "search for a substring " << l << " in a string above: "<< endl;
	cout << b.search(l) << endl; // done works 
	cout << "Break into separate words: " <<  endl;
	cout << e.breakApart() << endl;// done works 

	return 0;
}