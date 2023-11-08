#pragma once
#include "Person.h"
class Student: public Person
{
public:
	int id = 0;
	string kyrs = "a";
	string groop = "a";
	void print_id() {
		cout << "ID -> " << id;
	}
	void print_kyrs() {
		cout << "\tKyrs -> " << kyrs;
	}
	void print_groop() {
		cout << "\tGroop -> " << groop << "\t";
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

