#include "Person.h"
void Person::AddPerson()
{
	while (_flag)
	{
		cout << "S - �������� ��������\n"
			<< "A - �������� ���������\n"
			<< "E - �����\n";

		cin >> _choice;
		_choice = tolower(_choice);

		switch (_choice)
		{
		case 's':
		{
			Student* student = _student.create();
			student->setAll();
			student->print();
		}
		break;
		case 'a':
		{
			Aspirant* aspirant = _aspirant.create();
			aspirant->setAll();
			aspirant->print();
		}
		break;
		case 'e':
		{
			EndWork();
		}
		break;
		default:
			cout << "�������� ����\n";
			break;
		}
	}
}

void Person::EndWork()
{
	_flag = false;
}
