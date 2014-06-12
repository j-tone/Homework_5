#include <string>
#include <stack>
#include <iostream>
using namespace std;

template <typename T>
class Vector
{
private:
	int capacity;
	int CC;
	bool defaultTrue;
	bool cleared;
	T value;
	T* VectorData;

	void set_brandNewData(){
		T* brandNewData = new T[capacity];
		VectorData = brandNewData;
	}
	void set_defaultVal(){
		for (T* p = VectorData; p < VectorData + capacity; p++){
			*p = value;
		}
	}
	void set_appendage(){
		capacity++;
		T* newData = new T[capacity];
		for (int i = 0; i < CC; i++){
			newData[i] = VectorData[i];
		}
		delete[] VectorData;
		VectorData = newData;

	}
	void reset_CC(){
		CC = 0;
	}

public:
	Vector(){
		reset_CC();
		defaultTrue = false;
		this->capacity = 1;
	}
	Vector(int capacity){
		this->capacity = capacity;
		set_brandNewData();
		reset_CC();
		defaultTrue = false;
	}
	Vector(int capacity, T value){
		this->capacity = capacity;
		this->value = value;
		defaultTrue = true;
		set_brandNewData();
		set_defaultVal();
		reset_CC();
		cleared = false;
	}

	void push_back(T newVal){
		if (CC == capacity){
			set_appendage();
		}
		VectorData[CC] = newVal;
		CC++;
		cleared = false;
	}
	void pop_back(){
		capacity--;
		CC--;
		T* newData = new T[capacity];
		for (int i = 0; i < capacity; i++){
			newData[i] = VectorData[i];
		}
		delete[] VectorData;
		VectorData = newData;
	}
	int size() const{
		return capacity;
	}
	T at(int index) const{
		return VectorData[index];
	}
	bool empty() const{
		if (defaultTrue == true)
			return false;
		else if (CC == 0)
			return true;
		else
			return false;
	}
	void clear(){
		delete[] VectorData;
		cleared = true;
	}

	void Swap(Vector v2){
		if (cleared == false){
			clear();
		}
		capacity = v2.size();
		T* newData = new T[capacity];
		for (int i = 0; i < capacity; i++){
			newData[i] = v2.at(i);
		}
		VectorData = newData;
	}
};

int main()
{
	Vector<int> A(12);
	Vector<int> B;
	Vector<int> C(4, 8);
	Vector<int> G(5, 6);
	Vector<string> D(2, "Gila Monster");
	D.push_back("Komodo Dragon");
	D.push_back("Gecko");
	D.pop_back();
	cout << A.empty() << endl;
	cout << B.empty() << endl;
	cout << D.empty() << endl;
	C.clear();
	C.Swap(G);
	cout << C.at(3) << endl;
	cout << D.at(1) << endl;
}