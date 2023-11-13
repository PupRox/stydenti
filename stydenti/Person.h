#pragma once
#include <iostream>
#include <string>
using namespace std;
using std::string;

class Person
{
private:
	string age;
	string name;

public:
	Person(string age, string name) {
		this->age = age;
		this->name = name;
	}
	Person() {
		age = " ";
		name = " ";
	}
	void print_age() {
		cout << "\tAge -> " << age;
	}
	void print_name() {
		cout << "\tName -> " << name;
	}
	string write_name() {
		cout << "Write Name->\t";
		cin >> name;
		return name;
	}
	string write_age() {
		cout << "Write Age->\t";
		cin >> age;
		return age;
	}


};

