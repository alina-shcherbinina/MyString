#include "pch.h"
#include <iostream>
#include <conio.h>
#include <cstring>
#include "class string.h" 
using namespace std;

int main()
{
	MyString b("What a stupid lamb. ");
	MyString e("What a sick, masochistic lion");
	cout << "Class String! \n" << endl;
	cout << b << "\n length:" << b.getLength() << "\n Num. of sentences:" << endl;
	cout << e << "\n length:" << e.getLength() << "\n Num. of sentences:" << endl;
	b += e;
	cout << "Copy and add other string: \n" << b << endl;
	cout << "Search" "in a string \n" << endl;
	cout << "Num. of articles in a string: \n" << endl;
	return 0;
}
