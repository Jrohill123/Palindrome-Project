#include <iostream>
#include <fstream>
#include <string>
#include "stack.h"
#include "queues.h"
#include <cstring>
using namespace std;

int main() 
{
	fstream fin;
	fstream sent1;
	fstream sent2;
	fstream sent3;
	fstream sent4;
	fstream sent5;
	fstream sent6;
	fstream sent7;
	ofstream fout;
	fin.open("palindrome_input_file.txt");
	if (!(fin.is_open()))
	{
		cout << "The input file did not open" << endl;
	}
	sent1.open("palindrome_input_filearray.txt");
	if (!(sent1.is_open()))
	{
		cout << "The input file did not open" << endl;
	}
	sent2.open("palindrome_sentence2.txt");
	if (!(sent2.is_open()))
	{
		cout << "The input file did not open" << endl;
	}
	sent3.open("palindrome_sentence3.txt");
	if (!(sent3.is_open()))
	{
		cout << "The input file did not open" << endl;
	}
	sent4.open("palindrome_sentence4.txt");
	if (!(sent4.is_open()))
	{
		cout << "The input file did not open" << endl;
	}
	sent5.open("palindrome_sentence5.txt");
	if (!(sent5.is_open()))
	{
		cout << "The input file did not open" << endl;
	}
	sent6.open("palindrome_sentence6.txt");
	if (!(sent6.is_open()))
	{
		cout << "The input file did not open" << endl;
	}
	sent7.open("palindrome_sentence7.txt");
	if (!(sent7.is_open()))
	{
		cout << "The input file did not open" << endl;
	}

	fout.open("Output_file.txt");

	// this varrible will be used to input all our characters and pass into methods.
	char str1;
	char str2;
	char str3;
	char str4;
	char str5;
	char str6;
	char str7;
	// these varrible will capture the char that is deleted in stack.
	char sents;
	char sents2;
	char sents3;
	char sents4;
	char sents5;
	char sents6;
	char sents7;
	 // this varrible will capture the cahr that is deleted in queue.
	char sentq;
	char sentq2;
	char sentq3;
	char sentq4;
	char sentq5;
	char sentq6;
	char sentq7;
	 // this will be our true false operator for our output of the palindrome.
	bool palindrome = true;
	// the number stacks are our char arrays that we will use to compare to se if its a palindrome.
	stack<char> one;
	stack<char> two;
	stack<char> three;
	stack<char> four;
	stack<char> five;
	stack<char> six;
	stack<char> seven;
	// the number q's are our char arrays that we will use to compare to see if its a palindrome.
	queues<char> oneq;
	queues<char> twoq;
	queues<char> threeq;
	queues<char> fourq;
	queues<char> fiveq;
	queues<char> sixq;
	queues<char> sevenq;
	/* These are all our temp queues. Had to make multiple because whenver I deleted the queue fully and tried to enter
	more back in for the second sentence. The characters would not save inside the linked list to print.
	*/
	queues<char>temp;
	queues<char>temp2;
	queues<char>temp3;
	queues<char>temp4;
	queues<char>temp5;
	queues<char>temp6;
	queues<char>temp7;
	// The orgs are the origianl sentences with spaces. We use them for output purposes
	queues<char>org; 
	queues<char>org2;
	queues<char>org3;
	queues<char>org4;
	queues<char>org5;
	queues<char>org6;
	queues<char>org7;
	
	for (int i = 0; i < 19; i++)
	{
		sent1.get(str1);
		if (!(one.isfull()))
		{
			one.push(str1);
		}
		if (!(oneq.isfull()))
		{
			oneq.enqueue(str1);
		}
	}

	while (!(one.isempty()))
	{
		sents = one.pop();
		sentq = oneq.delqueue();
		if (!(temp.isfull()))
		{
			temp.enqueue(sentq);
		}
		if ((char)toupper(sents) != (char)toupper(sentq))
		{
			palindrome = false;
		}
		else
			palindrome = true;

	}

	for (int i = 0; i < 25; i++)
	{
		fin.get(str1);
		if (!(org.isfull()))
		{
			org.enqueue(str1);
		}
	}

	org.print(fout);

	if (palindrome == true)
	{
		fout << " is a palindrome";
	}
	else
	{
		fout << " is not a palindrome";
	}

	// This is start of second sentence

	for (int i = 0; i < 12; i++)
	{
		sent2.get(str2);
		if (!(two.isfull()))
		{
			two.push(str2);
		}
		if (!(twoq.isfull()))
		{
			twoq.enqueue(str2);
		}
	}


	while (!(two.isempty()))
	{
		sents2 = two.pop();
		sentq2 = twoq.delqueue();
		if (!(temp2.isfull()))
		{
			temp2.enqueue(sentq2);
		}
		if ((char)toupper(sents2) != (char)toupper(sentq2))
		{
			palindrome = false;
		}
		else
			palindrome = true;

	}

	for (int i = 0; i < 16; i++)
	{
		fin.get(str2);
		if (!(org2.isfull()))
		{
			org2.enqueue(str2);
		}
	}

	org2.print(fout);

	if (palindrome == true)
	{
		fout << " is a palindrome";
	}
	else
	{
		fout << " is not a palindrome";
	}
	
	// This is the third sentence

	for (int i = 0; i < 24; i++)
	{
		sent3.get(str3);
		if (!(three.isfull()))
		{
			three.push(str3);
		}
		if (!(threeq.isfull()))
		{
			threeq.enqueue(str3);
		}
	}


	while (!(three.isempty()))
	{
		sents3 = three.pop();
		sentq3 = threeq.delqueue();
		if (!(temp3.isfull()))
		{
			temp3.enqueue(sentq3);
		}
		if ((char)toupper(sents3) != (char)toupper(sentq3))
		{
			palindrome = false;
		}
		else
			palindrome = true;

	}

	for (int i = 0; i < 29; i++)
	{
		fin.get(str3);
		if (!(org3.isfull()))
		{
			org3.enqueue(str3);
		}
	}

	org3.print(fout);

	if (palindrome == true)
	{
		fout << " is a palindrome";
	}
	else
	{
		fout << " is not a palindrome";
	}

	// This is fourth sentence

	for (int i = 0; i < 7; i++)
	{
		sent4.get(str4);
		if (!(four.isfull()))
		{
			four.push(str4);
		}
		if (!(fourq.isfull()))
		{
			fourq.enqueue(str4);
		}
	}



	while (!(four.isempty()))
	{
		sents4 = four.pop();
		sentq4 = fourq.delqueue();
		if (!(temp4.isfull()))
		{
			temp4.enqueue(sentq4);
		}
		if ((char)toupper(sents4) != (char)toupper(sentq4))
		{
			palindrome = false;
		}
		else
			palindrome = true;

	}

	for (int i = 0; i < 9; i++)
	{
		fin.get(str4);
		if (!(org4.isfull()))
		{
			org4.enqueue(str4);
		}
	}

	org4.print(fout);

	if (palindrome == true)
	{
		fout << " is a palindrome";
	}
	else
	{
		fout << " is not a palindrome";
	}

	// This is the fifth sentence

	for (int i = 0; i < 21; i++)
	{
		sent5.get(str5);
		if (!(five.isfull()))
		{
			five.push(str5);
		}
		if (!(fiveq.isfull()))
		{
			fiveq.enqueue(str5);
		}
	}


	while (!(five.isempty()))
	{
		sents5 = five.pop();
		sentq5 = fiveq.delqueue();
		if (!(temp5.isfull()))
		{
			temp5.enqueue(sentq5);
		}
		if ((char)toupper(sents5) != (char)toupper(sentq5))
		{
			palindrome = false;
		}
		else
			palindrome = true;

	}

	for (int i = 0; i < 28; i++)
	{
		fin.get(str5);
		if (!(org5.isfull()))
		{
			org5.enqueue(str5);
		}
	}

	org5.print(fout);

	if (palindrome == true)
	{
		fout << " is a palindrome";
	}
	else
	{
		fout << " is not a palindrome";
	}

	// This is sentence 6

	for (int i = 0; i < 11; i++)
	{
		sent6.get(str6);
		if (!(six.isfull()))
		{
			six.push(str6);
		}
		if (!(sixq.isfull()))
		{
			sixq.enqueue(str6);
		}
	}


	while (!(six.isempty()))
	{
		sents6 = six.pop();
		sentq6 = sixq.delqueue();
		if (!(temp6.isfull()))
		{
			temp6.enqueue(sentq6);
		}
		if ((char)toupper(sents6) != (char)toupper(sentq6))
		{
			palindrome = false;
		}
		else
			palindrome = true;

	}

	for (int i = 0; i < 15; i++)
	{
		fin.get(str6);
		if (!(org6.isfull()))
		{
			org6.enqueue(str6);
		}
	}

	org6.print(fout);

	if (palindrome == true)
	{
		fout << " is a palindrome";
	}
	else
	{
		fout << " is not a palindrome";
	}

	// This is the seventh sentence

	for (int i = 0; i < 12; i++)
	{
		sent7.get(str7);
		if (!(seven.isfull()))
		{
			seven.push(str7);
		}
		if (!(sevenq.isfull()))
		{
			sevenq.enqueue(str7);
		}
	}


	while (!(seven.isempty()))
	{
		sents7 = seven.pop();
		sentq7 = sevenq.delqueue();
		if (!(temp7.isfull()))
		{
			temp7.enqueue(sentq7);
		}
		if ((char)toupper(sents7) != (char)toupper(sentq7))
		{
			palindrome = false;
		}
		else
			palindrome = true;

	}

	for (int i = 0; i < 14; i++)
	{
		fin.get(str7);
		if (!(org7.isfull()))
		{
			org7.enqueue(str7);
		}
	}

	org7.print(fout);

	if (palindrome == true)
	{
		fout << " is a palindrome";
	}
	else
	{
		fout << " is not a palindrome";
	}
	return 0;
}