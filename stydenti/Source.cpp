#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
using namespace std;

void print(Student*& mass, int& rows) {
	for (int i = 0; i < rows; i++)
	{
		cout << i << "->";
		mass[i].print_id();
		mass[i].print_name();
		mass[i].print_age();
		mass[i].print_kyrs();
		mass[i].print_groop();
		cout << endl;
	}
}
void write(Student*& mass, int& rows) {
	for (int i = 0; i < rows; i++)
	{
		cout << endl;

		mass[i].write_name();
		mass[i].write_age();
		mass[i].write_id();
		mass[i].wtite_kyrs();
		mass[i].write_groop();

	}
}
void change(Student*& mass, int& rows, int& x,int& o) {
	for (int i = 0; i < rows; i++)
	{
		cout << i << "->\t";
		mass[i].print_id();
		mass[i].print_name();
		mass[i].print_age();
		mass[i].print_kyrs();
		mass[i].print_groop();
		cout << endl;
	}
	cout << endl << "Choose witch student you want change" << endl;
	cin >> x;
	cout << "0. ID";
	cout << "\t1. Name";
	cout << "\t2. Age";
	cout << "\t3. Kyrs";
	cout << "\t4. Groop";
	cout << endl;
	cout << endl << "What u want change?" << endl;
	cin >> o;
	for (int i = 0; i < rows; i++)
	{
		if (x == i)
		{
			switch (o)
			{
			case 0: mass[x].write_id(); break;
			case 1: mass[x].write_name(); break;
			case 2: mass[x].write_age(); break;
			case 3: mass[x].wtite_kyrs(); break;
			case 4: mass[x].write_groop(); break;
			}
		}
	}
}
void pop_back(Student*& mass, int& rows) {
	int x;
	cout << "Choose witch student you want remove" << endl;
	cin >> x;
	rows--;
	Student *newMass = new Student[rows];
	for (int i = 0; i < rows; i++)
	{
		if (i >= x)
		{
			newMass[i] = mass[i+1];
		}
		else newMass[i] = mass[i];
	}
	delete[] mass;

	mass = newMass;
}
void push_back(Student*& mass, int& rows) {
	Student* newMass = new Student[rows+1];
	for (int i = 0; i < rows; i++)
	{
		newMass[i] = mass[i];
	}
	newMass[rows];
		rows++;
	delete[] mass;
	mass = newMass;
}

int main() {
	int rows;
	int z, x, o;
	bool stop = true;



	while (stop) {
		cout << "Write numbers of stydent" << endl;
		cin >> rows;
		Student* mass = new Student[rows];
		try
		{
			while (stop)
			{
				cout << endl << "1. Creat new Stydent" << endl << "2. Read base of stydent" << endl << "3. Change information of stydent" << endl;
				cout << "4. Edit new student" << endl << "5. Remove stydent" << endl << "9. Exit" << endl;
				cin >> z;
				if (rows && z) {
					switch (z)
					{
						//zapolnyaem massiv
					case 1:
						write(mass, rows);
						break;

						//vivodim massiv
					case 2:
						print(mass, rows);
						break;

						//redaktiryem massiv(konkretnoe znachenie v massive)
					case 3:
						change(mass, rows, x, o);
						break;

						//dobavlenie stroki
					case 4:push_back(mass, rows); break;

						//ydalyaem konkretnyu stroky v massive
					case 5:
						pop_back(mass, rows);
						break;

					case 9: stop = false;
						delete[] mass;
						break;
					}
				}
				else throw "Errore";

			}
		}
		catch (...)
		{
			system("cls");
			cout << "Incorrect value entry" << endl;
			cin.clear();
			cin.ignore(100, '\n');
		}
		system("pause");
		system("cls");
	}

	return 0;
}
