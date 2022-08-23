#include "Person.h"
void Person::AddPerson()
{
	while (_flag)
	{
		cout << "S - добавить студента\n"
			<< "A - добавить аспиранта\n"
			<< "E - выход\n";

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
			cout << "Неверный ввод\n";
			break;
		}
	}
}

void Person::EndWork()
{
	_flag = false;
}
