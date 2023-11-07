#include <iostream>
#include <string>
using namespace std;

class Stydent
{
private:
	int age;
	string name;

public:
	Stydent(int age, string name) {
		this->age = age;
		this->name = name;
	}
	Stydent() {
		age = 0;
		name = " ";
	}
	void print() {
		cout << "Mame -> " << name << "\tAge -> " << age << endl;
	}
	string write() {
		cout << "Write Name" << endl;
		cin >> name;
		cout << "Write Age" << endl;
		cin >> age;
		return name; age;
	}


};

int main() {
	const int size = 2;
	int z;
	bool stop = true;
	Stydent mas1[size];
	
	while (stop)
	{
		cout << "1. Creat new Stydent" << endl << "2. Read base of stydent" << endl << "3. Exit" << endl;
		cin >> z;
		switch (z)
		{
		case 1: for (int i = 0; i < size; i++)
		{
			mas1[i].write();
		}
			  break;
		case 2: for (int i = 0; i < size; i++)
		{
			mas1[i].print();
		}
			  break;
		case 3: stop = false; break;
		}
	}
	
	
	

	
	return 0;
}
