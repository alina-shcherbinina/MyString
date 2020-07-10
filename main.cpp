#include "pch.h"
#include <iostream>
#include <conio.h>
#include <cstring>
#include "class string.h" 
using namespace std;

int main()
{
	MyString b("Hello 111");
	MyString e("The rest of the morning 34 passed in a blur. It was difficult  56 to believe that I hadn't just imagined what Edward had said, and the way his eyes had looked.Maybe it was just a very convincing dream that I'd confused with reality. That seemed more probable than that I really appealed to him on any level. So I was impatient and frightened as Jessica and I entered the cafeteria. I wanted to see his face, to see if he'd gone back to the cold, indifferent person I'd known for the last several weeks.");
	cout << "Class MyString! \n" << endl;
	cout << b << endl;
	cout<< " char length:" << b.getLength() << "\n Num. of words: " << b.getWords() << "\n Num. of sentences:" << b.getSentences() << endl; //done works
	cout << e << endl;
	cout << " char length:" << e.getLength() << "\n Num. of words: " << e.getWords() << "\n Num. of sentences:" << e.getSentences() << endl; //done works
	b += e;
	cout << " Copy and add other string: \n" << b << endl; // done works
	cout << " Num. of articles in a string: \n" << b.getArticles() << endl; // done works
	cout << "SEARCH WILL PUT FOUND STRINGS IN BRACKETS []" << endl;
	cout << " search for a substring '*?#' in a string above: " << endl;
	b.search("*?#");
	cout << " search for a substring '*' in a string above: " << endl;
	b.search("*");
	cout << " search for a substring '?' in a string above: " << endl;
	b.search("?");
	cout << " search for a substring '#' in a string above: "<< endl;
	b.search("#");

	cout << " Break into separate words: " <<  endl;
	cout << e.breakApart() << endl;// done works 

	return 0;
}