#pragma once
#include <iostream>
#include <string>
using namespace std;
using std::string;

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
		name = "a";
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
	int write_age() {
		cout << "Write Age->\t";
		cin >> age;
		return age;
	}


};

