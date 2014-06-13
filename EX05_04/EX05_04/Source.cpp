#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <ctime>
#include <cstdlib>
using namespace std;

template<typename T>
void shuffle(vector<T> & v)
{
	int count = 0; //used to keep track of how many valid times gone through the loop
	vector<bool> eva(v.size(), 0);//used to keep track of the random numbers already used 
									//(all are initialized to false - the value will be true when that index number is used)
	vector<T> newVector; //will be used to set v equal to
	while (count < v.size()){ //this loop will run to make sure a new random number is being used until the size of v
		int r = (rand() % v.size());
		if (eva[r] == true){ //eva lets me know if a random number was already used at the very start
			continue;
		}
		else{
			newVector.push_back(v[r]);
			count++;
			eva[r] = true;
		}
	}
	for (int i = 0; i < v.size(); i++){
		v[i] = newVector[i];
	}
}

int main()
{
	srand(time(NULL));

	vector<string> A(3);
	A[0] = "Gila Monster";
	A[1] = "Lizard";
	A[2] = "Gecko";
	A.push_back("Salamander");
	
	vector<int> b(10);

	for (int i = 0; i < b.size(); i++){
		cout << "Enter any number: ";
		cin >> b[i];
	}

	shuffle(b);

	cout << "\nHere's your shuffled result:" << endl;
	for (int j = 0; j < 10; j++){
		cout << b[j] << " ";
	}
	cout << endl;
}