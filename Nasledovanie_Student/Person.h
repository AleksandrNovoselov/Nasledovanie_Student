#pragma once
#include "Student.h"
#include "Aspirant.h"
class Person
{
	char _choice{};
	bool _flag{ true };

	Student _student;
	Aspirant _aspirant;

	void EndWork();
public:
	void AddPerson();
	
};

