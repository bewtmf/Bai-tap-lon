#include <iostream>
#include <string>
using namespace std;

class Person
{
protected:
    string name;
    int age, address, mui1, mui2;

public:
    virtual void Nhap();
    virtual void Xuat();
    virtual void Tinhtrang() = 0;
};

class Student : public Person
{
private:
    string ID, study;

public:
    void Nhap();
    void Xuat();
    void Tinhtrang();
};

class Teacher : public Person
{
private:
    string ID, teach;

public:
    void Nhap();
    void Xuat();
    void Tinhtrang();
};

// Person

void Person::Nhap()
{
    fflush(stdin);
    cout << "Nhap ho ten: ";
    getline(cin, name);
    do
    {
        cout << "Nhap noi o hien tai: ";
        cin >> address;
        if (address < 0 || address > 1)
            cout << "Khong hop le vui long nhap lai" << endl;
    } while (address < 0 || address > 1);
    cout << "************Tinh trang tiem chung********" << endl;
    do
    {
        cout << "Mui 1: ";
        cin >> mui1;
        if (mui1 < 0 || mui1 > 1)
            cout << "Khong hop le vui long nhap lai" << endl;
    } while (mui1 < 0 || mui1 > 1);

    if (mui1 == 1)
    {
        do
        {
            cout << "Mui 2: ";
            cin >> mui2;
            if (mui2 < 0 || mui2 > 1)
                cout << "Khong hop le vui long nhap lai" << endl;
        } while (mui2 < 0 || mui2 > 1);
    }
    else
        mui2 == 0;
}

void Person::Xuat()
{
    fflush(stdin);
    cout << "Ho ten: " << name << endl;
    cout << "Noi o hien tai: ";
    if (address == 0)
        cout << "Que" << endl;
    else if (address == 1)
        cout << "Thanh pho" << endl;
    cout << "************Tinh trang tiem chung********" << endl;
    cout << "Mui 1: ";
    if (mui1 == 0)
        cout << "chua tiem" << endl;
    else if (mui1 == 1)
        cout << "da tiem" << endl;
    cout << "Mui 2: ";
    if (mui2 == 0)
        cout << "chua tiem" << endl;
    else if (mui2 == 1)
        cout << "da tiem" << endl;
}

// Student

void Student::Nhap()
{
    fflush(stdin);
    cout << "Nhap ID sinh vien (ID): ";
    getline(cin, ID);
    cout << "Hoc lop: ";
    getline(cin, study);
    Person::Nhap();
}

void Student::Tinhtrang()
{
    if (mui1 == 1 && mui2 == 1)
        cout << "On ap";
    else
        cout << "Ko on";
}

void Student::Xuat()
{
    cout << endl
         << "**********Thong tin sinh vien************" << endl;
    cout << "ID: " << ID << endl;
    cout << "Lop: " << study << endl;
    Person::Xuat();
}

int main()
{
    Student a;
    a.Nhap();
    a.Xuat();
    a.Tinhtrang();
}