#pragma once
#include"Student.h"
#include <string>
class Aspirant:public Student
{
	string _candidateWork;

public:
	void setCandidateWork(string work)	{_candidateWork = work;	}

	string getCandidateWork() { return _candidateWork; }

	void print() override;

	Aspirant* create() { return new Aspirant; }

	void setAll();
};

