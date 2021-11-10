#include <iostream>
#include <string>
#include <vector>
using namespace std;

// CLASS PERSON
class Person
{
protected:
    string name, address;
    int age, mui1, mui2;

public:
    virtual void Nhap();
    virtual void Xuat();
    virtual void Tinhtrang() = 0;
};

void Person::Nhap()
{
    fflush(stdin);
    cout << "Nhap ho ten: ";
    getline(cin, name);
    cout << "Nhap noi o hien tai: ";
    getline(cin, address);
    do
    {
        cout << "Tuoi:";
        cin >> age;
        if (age < 12 || age > 150)
            cout << "Khong hop le de tiem va vui lop nhap lai:" << endl;
    } while (age < 12 || age > 150);

    cout << "*****Nhap 0 neu chua tiem va nhap 1 neu da tiem!*****" << endl;
    do
    {
        cout << "Mui 1: ";
        cin >> mui1;
        if (mui1 < 0 || mui1 > 1)
            cout << "Khong hop le va vui long nhap lai" << endl;
    } while (mui1 < 0 || mui1 > 1);

    if (mui1 == 1)
    {
        do
        {
            cout << "Mui 2: ";
            cin >> mui2;
            if (mui2 < 0 || mui2 > 1)
                cout << "Khong hop le va vui long nhap lai" << endl;
        } while (mui2 < 0 || mui2 > 1);
    }
    else
        mui2 == 0;
}

void Person::Xuat()
{
    fflush(stdin);
    cout << "			-> Ho ten:" << name << endl;
    cout << "			-> Noi o hien tai:" << address << endl;
    cout << "			-> So tuoi:" << age << endl;
    cout << "			-> Mui 1:";
    if (mui1 == 0)
        cout << "chua tiem." << endl;
    else if (mui1 == 1)
        cout << "da tiem." << endl;
    cout << "			-> Mui 2:";
    if (mui2 == 0)
        cout << "chua tiem." << endl;
    else if (mui2 == 1)
        cout << "da tiem." << endl;
}

//CLASS STUDENT
class Student : public Person
{
private:
    string ID, study;

public:
    void Nhap();
    void Xuat();
    void Tinhtrang();
};

void Student::Nhap()
{
    fflush(stdin);
    cout << "\n*********************" << endl;
    cout << "\nNhap ID sinh vien (ID): ";
    getline(cin, ID);
    cout << "Hoc lop: ";
    getline(cin, study);
    Person::Nhap();
}

void Student::Tinhtrang()
{
    if (mui1 == 1 && mui2 == 1)
        cout << "			=> An toan";
    else if (mui1 == 1 && mui2 == 0)
        cout << "			=> Tam an toan.";
    else
        cout << "			=> Khong an toan";
}

void Student::Xuat()
{
    cout << endl
         << "**********Thong tin giao vien va tinh trang tiem chung************" << endl;
    cout << "			-> ID: " << ID << endl;
    cout << "			-> Lop: " << study << endl;
    Person::Xuat();
}

//CLASS TEACHER
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
    cout << "\n*********************" << endl;
    cout << "\nNhap ID giang vien (ID): ";
    getline(cin, ID);
    cout << "Day lop: ";
    getline(cin, teach);
    Person::Nhap();
}

void Teacher::Tinhtrang()
{
    if (mui1 == 1 && mui2 == 1)
        cout << "			=> An toan";
    else if (mui1 == 1 && mui2 == 0)
        cout << "			=> Tam an toan.";
    else
        cout << "			=> Khong an toan";
}

void Teacher::Xuat()
{
    cout << endl
         << "**********Thong tin giao vien va tinh trang tiem chung************" << endl;
    cout << "			-> ID: " << ID << endl;
    cout << "			-> Lop: " << teach << endl;
    Person::Xuat();
}

//Quan ly danh sach sinh vien, giang vien
class quanly
{
private:
    vector<Person *> Arr;

public:
    void DanhSach();
    void XuatDanhSach();
};

void quanly::DanhSach()
{
    int n;
    cout << "Nhap n:";
    cin >> n;
    Person *sv;
    for (int i = 0; i < n; i++)
    {
        sv = new Student;
        sv->Nhap();
        Arr.push_back(sv);
    }
}

void quanly::XuatDanhSach()
{
    for (int i = 0; i < Arr.size(); i++)
        Arr.at(i)->Xuat();
}