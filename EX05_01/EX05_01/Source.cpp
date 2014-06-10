#include <iostream>
#include <vector>
#include <string>
using namespace std;

template<typename T>
int linearSearch(const T list[], T key, int arraysize)
{
	for (int i = 0; i < arraysize; i++){
		if (key == list[i])
			return i;
	}
	return -1;
}

int main()
{
	const int SIZE = 5;
	string s[SIZE] = { "Brad Pitt", "Nicholas Cage", "Julia Roberts", "Robert Downey Jr.", "Jennifer Lawrence" };
	int i[SIZE] = { 3, 10, 7, 9, 4 };
	double d[SIZE] = { 5.5, 2.3, 9.1, 7.0, 10 };

	string guess;
	cout << "Here's a riddle." << endl;
	cout << "Can you guess who these actors/actresses are by their initials? (caps count)" << endl;
	cout << "BP   NC   JR   RDJ   JL" << endl;
	getline(cin, guess);

	int p = linearSearch(s, guess, SIZE);
	if (p != (-1)){
		cout << "Yes! " << s[p] << " is one of them!" << endl;
	}
	else
		cout << "Nah, that's not one of them." << endl;

	int g = linearSearch(i, 5, SIZE);
	cout << g << endl;
	double r = linearSearch(d, 7.0, SIZE);
	cout << r << endl;

	cout << "These are just numbers. . . " << endl;
}