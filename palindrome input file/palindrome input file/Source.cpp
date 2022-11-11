#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ofstream fout;
	ofstream fout2;
	ofstream fsent2;
	ofstream fsent3;
	ofstream fsent4;
	ofstream fsent5;
	ofstream fsent6;
	ofstream fsent7;
	fout.open("palindrome_input_file.txt");
	fout2.open("palindrome_input_filearray.txt");
	fsent2.open("palindrome_sentence2.txt");
	fsent3.open("palindrome_sentence3.txt");
	fsent4.open("palindrome_sentence4.txt");
	fsent5.open("palindrome_sentence5.txt");
	fsent6.open("palindrome_sentence6.txt");
	fsent7.open("palindrome_sentence7.txt");
	string str1 = "Sore Was I ere I Saw Eros";
	string str2 = "Too hot to hoot";
	string str3 = "This is a palindrome program";
	string str4 = "Tuna nut";
	string str5 = "Anne I stay a day at Sienna";
	string str6 = "I love to code";
	string str7 = "Noel sees Leon";
	char ctr1[] = "SoreWasIereISawEros";
	char ctr2[] = "Toohottohoot";
	char ctr3[] = "Thisisapalindromeprogram";
	char ctr4[] = "Tunanut";
	char ctr5[] = "AnneIstayadayatSienna";
	char ctr6[] = "Ilovetocode";
	char ctr7[] = "NoelseesLeon";


	fout << str1 << endl;
	fout << str2 << endl;
	fout << str3 << endl;
	fout << str4 << endl;
	fout << str5 << endl;
	fout << str6 << endl;
	fout << str7 << endl;
	fout2 << ctr1 << endl;
	fsent2 << ctr2 << endl;
	fsent3 << ctr3 << endl;
	fsent4 << ctr4 << endl;
	fsent5 << ctr5 << endl;
	fsent6 << ctr6 << endl;
	fsent7 << ctr7 << endl;
	return 0;
}