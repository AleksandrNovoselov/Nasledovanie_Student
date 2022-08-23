#pragma once
#include <iostream>
using namespace std;
class Student
{
	string _name;
	string _surname;
	int _idStudent;
	static int _id;

public:
	Student() :_idStudent(++_id) {}

	void setName(string name) { _name = name; }

	void setSurname(string surname) { _surname = surname; }

	string getName() { return _name; }

	string getSurname() { return _surname; }

	int getIdStudent() { return _idStudent; }

	virtual void print();

	void setAll();

	Student* create()	{return new Student;}
};


