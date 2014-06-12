#include <iostream>
#include <string>
using namespace std;

template<typename T>
bool isSorted(const T list[], int size)
{
	for (int i = 0; i < size; i++){
		for (int j = i+1; j < size; j++){
			if (list[i] > list[j])
				return false;
		}
	}
	return true;
}

int main()
{
	int a[5] = { 1, 2, 5, 5, 5 };
	int b[4] = { 2, 3, 2, 1 };

	double c[5] = { 6.7, 2.2, 3.3, 4.4, 5.5 };

	string d[3] = { "Papa Joe", "Betty Sue", "Zed" };
	char e[7] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g' };

	cout << isSorted(a, 5) << endl;
	cout << isSorted(b, 4) << endl;
	cout << isSorted(c, 5) << endl;
	cout << isSorted(d, 3) << endl;
	cout << isSorted(e, 7) << endl;
}