#include <iostream>
#include <string>
using namespace std;




string readString()
{
	string str;
	cout << "\nEnter a string?\n";
	getline(cin, str);
	return str;
}

bool isVowelLetter(char ch)
{
	char vowels[5] = { 'a', 'e', 'i', 'o', 'u' };

	for (int i = 0; i < 5; i++)
	{
		if (vowels[i] == tolower(ch))//aeiou
			return true;
	}
	return false;
}

int countVowelsInString(string str)
{
	int counter = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (isVowelLetter(str[i]))
			counter++;
	}
	return counter;
}


void printVowelsCount(string str)
{
	cout << "Number of vowels is: " << countVowelsInString(str) << "\n";
}

int main()
{
	string str = readString();
	//Mohammad Abu-Hadhoud Programming Advices

	printVowelsCount(str);



	system("pause>0");
	return main();

}