#include "Student.h"

int Student::_id = 998;

void Student::print()
{
    cout << "���: " << _name << " �������: " << _surname << " �������������� �����: " << _idStudent<<endl;
}

void Student::setAll()
{
    string name;

	cout << "������� ���\n";
    cin >> name;

    setName(name);

    cout << "������� �������\n";
    cin >> name;

    setSurname(name);
}


