#include "Aspirant.h"


void Aspirant::print()
{
    cout << "���: " << getName() << " �������: " << getSurname() << " �������������� �����: " << getIdStudent();
    cout << "\n�������� ������������ ������: "<<_candidateWork<<endl;
}
void Aspirant::setAll()
{
    string name;

    cout << "������� ���\n";
    cin >> name;

    setName(name);

    cout << "������� �������\n";
    cin >> name;

    setSurname(name);

    cout << "������� �������� ������������ ������\n";
    getline(cin, name);
    getline(cin, name);

    setCandidateWork(name);
}

