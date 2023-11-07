#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
	int age;
	string name;

public:
	Person(int age, string name) {
		this->age = age;
		this->name = name;
	}
	Person() {
		age = 0;
		name = " ";
	}
	void print_per() {
		cout << "Name -> " << name << "\tAge -> " << age;
	}
	string write_per() {
		cout << "Write Name->\t";
		cin >> name;
		cout << "Write Age->\t";
		cin >> age;
		return name; age;
	}


};
class Student: public Person {
public: 
	int id;
	string kyrs;
	string groop;
	void print_stud() {
		cout << "\tID -> " << id << "\tKyrs -> " << kyrs << "\tGroop -> "<<groop<<"\t";
	}
	int write_id() {
		cout << "Write ID->\t";
		cin >> id;
		return id; 
	}
	string wtite_kyrs() {
		cout << "Write Kyrs->\t";
		cin >> kyrs;
		return kyrs;
	}
	string write_groop() {
		cout << "Write Groop->\t";
		cin >> groop;
		return groop;
	}

};

int main() {
	int rows;
	int colums = 1;
	int z,x;
	bool stop = true;
	cout << "Write numbers of stydent" << endl;
	cin >> rows;
	Student**mass = new Student*[rows];
	for (int i = 0; i < rows; i++)
	{
		mass[i] = new Student[colums];
	}
	
	while (stop)
	{
		cout << "1. Creat new Stydent" << endl << "2. Read base of stydent" << endl << "3. Change information of stydent" << endl;
		cout << "4. Remove stydent" << endl << "0. Exit" << endl;
		cin >> z;
		switch (z)
		{
		case 1: for (int i = 0; i < rows; i++)
		{
			cout << endl;
			for (int j = 0; j < colums; j++)
			{
				mass[i][j].write_per();
				mass[i][j].write_id();
				mass[i][j].wtite_kyrs();
				mass[i][j].write_groop();
			}	
		}
			  break;
		case 2: for (int i = 0; i < rows; i++)
		{
			cout << i << "->";
			for (int j = 0; j < colums; j++)
			{
				mass[i][j].print_per();
				mass[i][j].print_stud();
			}
			cout << endl;
		}
			  break;
		/*case 3: {
			cout << "Choose witch student you want change" << endl;
			cin >> x;
			switch (x)
			{
			case 1: 
			}
		}*/
		/*case 4: {
			cout << "Choose witch student you want remove" << endl;
			cin >> x;

		}*/
		case 0: stop = false; break;
		}
		
	}
	for (int i = 0; i < rows; i++)
	{
		delete[] mass[i];
	}
	delete[] mass;
	

	
	return 0;
}
