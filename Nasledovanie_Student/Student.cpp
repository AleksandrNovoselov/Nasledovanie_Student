#include "Student.h"

int Student::_id = 998;

void Student::print()
{
    cout << "Имя: " << _name << " Фамилия: " << _surname << " Индивидуальный номер: " << _idStudent<<endl;
}

void Student::setAll()
{
    string name;

	cout << "Введите имя\n";
    cin >> name;

    setName(name);

    cout << "Введите фамилию\n";
    cin >> name;

    setSurname(name);
}


