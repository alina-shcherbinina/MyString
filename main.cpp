#include "pch.h"
#include <iostream>
#include <conio.h>
#include <cstring>
#include "class string.h" 
using namespace std;

int main()
{
	MyString b("But he and Eric both met me at the door as usual, so I figured I wasn't totally unforgiven. Mike seemed to become more himself as we walked, gaining enthusiasm as he talked about the weather report for this weekend.The rain was supposed to take a minor break, and so maybe his beach trip would be possible. I tried to sound eager, to make up for disappointing him yesterday. It was hard; rain or no rain, it would still only be in the high forties, if we were lucky");
	MyString e("The rest of the morning passed in a blur. It was difficult to believe that I hadn't just imagined what Edward had said, and the way his eyes had looked.Maybe it was just a very convincing dream that I'd confused with reality. That seemed more probable than that I really appealed to him on any level. So I was impatient and frightened as Jessica and I entered the cafeteria. I wanted to see his face, to see if he'd gone back to the cold, indifferent person I'd known for the last several weeks.");
	cout << "Class MyString! \n" << endl;
	cout << b << endl;
	cout<< " char length:" << b.getLength() << "\n Num. of words: " << b.getWords() << "\n Num. of sentences:" << b.getSentences() << endl; //done works
	cout << e << endl;
	cout << " char length:" << e.getLength() << "\n Num. of words: " << e.getWords() << "\n Num. of sentences:" << e.getSentences() << endl; //done works
	b += e;
	cout << " Copy and add other string: \n" << b << endl; // done works
	cout << " Num. of articles in a string: \n" << b.getArticles() << endl; // done works
	string l = "be";
	cout << " search for a substring '" << l << "' in a string above: "<< endl;
	cout << b.search(l) << endl; // done works 
	cout << " Break into separate words: " <<  endl;
	cout << e.breakApart() << endl;// done works 

	return 0;
}