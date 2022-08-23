#include "Aspirant.h"


void Aspirant::print()
{
    cout << "Имя: " << getName() << " Фамилия: " << getSurname() << " Индивидуальный номер: " << getIdStudent();
    cout << "\nНазвание кандидатской работы: "<<_candidateWork<<endl;
}
void Aspirant::setAll()
{
    string name;

    cout << "Введите имя\n";
    cin >> name;

    setName(name);

    cout << "Введите фамилию\n";
    cin >> name;

    setSurname(name);

    cout << "Введите название кандидатской работы\n";
    getline(cin, name);
    getline(cin, name);

    setCandidateWork(name);
}

