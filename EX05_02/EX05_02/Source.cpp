#include <iostream>
#include <string>
using namespace std;

template<typename T>
void swap(T &x, T &y)
{
	T tmp = x;
	x = y;
	y = tmp;
}

template<typename T>
T sort_it(const T list[], int size)
{
	T listB = list;
	for (int i = 0; i < size; i++){
		for (int j = size - 1; j > i; j--){
			if (list[i] > list[j])
				swap(listB[i], listB[j]);
		}
	}
	return listB;
}

template<typename T>
bool isSorted(const T list[], int size)
{
	T listB = sort_it(list, size);
	for (int i = 0; i < size; i++){
		if (list[i] != listB[i])
			return false;
	}
	return true;
}

int main()
{
	int a[5] = { 1, 2, 3, 4, 5 };
	int b[4] = { 2, 3, 2, 1 };

	double c[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 };

	string d[3] = { "Papa Joe", "Betty Sue", "Zed" };

	cout << isSorted(a, 5) << endl;
	cout << isSorted(b, 4) << endl;
	cout << isSorted(c, 5) << endl;
	//cout << isSorted(d, 3) << endl;
}