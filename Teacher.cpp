#include <iostream>
#include <string>
#include "Person.cpp"

using namespace std;

class Teacher : public Person
{
private:
    string ID, teach;

public:
    void Nhap();
    void Xuat();
    void Tinhtrang();
};

void Teacher::Nhap()
{
    fflush(stdin);
    cout << "\nNhap ID giao vien (ID): ";
    getline(cin, ID);
    cout << "Day lop: ";
    getline(cin, teach);
    Person::Nhap();
}

void Teacher::Tinhtrang()
{
    if (mui1 == 1 && mui2 == 1)
        cout << "An toan";
    else if (mui1 == 1 && mui2 == 0)
        cout << "Tam an toan.";
    else
        cout << "Khong an toan";
}

void Teacher::Xuat()
{
    cout << endl
         << "**********Thong tin giao vien************" << endl;
    cout << "ID: " << ID << endl;
    cout << "Lop: " << teach << endl;
    Person::Xuat();
}