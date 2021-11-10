#include <iostream>
#include <string>
#include <vector>
#include "TextColor.h"
using namespace std;

// CLASS PERSON
class Person
{
protected:
    string name, address;
    int age, mui1, mui2, tenvc1, tenvc2;

public:
    virtual void Nhap();
    virtual void Xuat();
    virtual void Tinhtrang() = 0;
};

void Person::Nhap()
{
    fflush(stdin);
    cout << "-Nhap ho ten: ";
    getline(cin, name);
    cout << "-Nhap noi o hien tai: ";
    getline(cin, address);
    do
    {
        cout << "-Tuoi:";
        cin >> age;
        if (age < 12 || age > 150)
            cout << "Khong hop le de tiem va vui lop nhap lai:" << endl;
    } while (age < 12 || age > 150);

    cout << "*Ghi chu:" << endl;
    cout << "*****Nhap 0 neu chua tiem va nhap 1 neu da tiem ( nhap 1 den 8 de chon VACCINE)!*****" << endl;
    do
    {
        cout << "-Mui 1: ";
        cin >> mui1;
        if (mui1 < 0 || mui1 > 1)
            cout << "Khong hop le va vui long nhap lai" << endl;
    } while (mui1 < 0 || mui1 > 1);

    if (mui1 == 1)
    {
        do
        {
            cout << "(1)Vero cell\t(2) Pfizer\t(3) Astra Zecera\t(4)Abdala" << endl
                 << "(5) Spikevax\t(6) Hayat - Vax\t(7) SPUTNIK V\t(8) Janssen." << endl;
            cout << "-Ten VACCINE: ";
            cin >> tenvc1;
            if (tenvc1 < 1 || tenvc1 > 8)
                cout << "Khong hop le va vui long nhap lai" << endl;
        } while (tenvc1 < 1 || tenvc1 > 8);
        do
        {
            cout << "-Mui 2: ";
            cin >> mui2;
            if (mui2 < 0 || mui2 > 1)
                cout << "Khong hop le va vui long nhap lai" << endl;
        } while (mui2 < 0 || mui2 > 1);
        if (mui2 == 1)
        {
            do
            {
                cout << "(1)Vero cell\t(2) Pfizer\t(3) Astra Zecera\t(4)Abdala" << endl
                     << "(5) Spikevax\t(6) Hayat - Vax\t(7) SPUTNIK V\t(8) Janssen." << endl;
                cout << "-Ten VACCINE: ";
                cin >> tenvc2;
                if (tenvc2 < 1 || tenvc2 > 8)
                    cout << "Khong hop le va vui long nhap lai" << endl;
            } while (tenvc2 < 1 || tenvc2 > 8);
        }
    }
    else
        mui2 == 0;
}

void Person::Xuat()
{
    fflush(stdin);
    cout << "\t\t\t-> Ho ten:" << name << endl;
    cout << "\t\t\t-> Noi o hien tai:" << address << endl;
    cout << "\t\t\t-> So tuoi:" << age << endl;
    if (mui1 == 1)
    {
        cout << "\t\t\t-> Mui 1: ";
        TextColor(10);
        cout << "Da tiem" << endl;
        dfColor();
        cout << "\t\t\t-> Ten Vaccine: ";
        switch (tenvc1)
        {
        case 1:
            TextColor(10);
            cout << "Vero Cell." << endl;
            dfColor();
            break;
        case 2:
            TextColor(10);
            cout << "Pfizer." << endl;
            dfColor();
            break;
        case 3:
            TextColor(10);
            cout << "Astra Zecera." << endl;
            dfColor();
            break;
        case 4:
            TextColor(10);
            cout << "Abdala." << endl;
            dfColor();
            break;
        case 5:
            TextColor(10);
            cout << "Spikevax." << endl;
            dfColor();
            break;
        case 6:
            TextColor(10);
            cout << "Hayat-Vax." << endl;
            dfColor();
            break;
        case 7:
            TextColor(10);
            cout << "SPUTNIK V." << endl;
            dfColor();
            break;
        case 8:
            TextColor(10);
            cout << "Janssen." << endl;
            dfColor();
            break;
        }
    }
    else
    {
        TextColor(4);
        cout << "\t\t\tChua tiem Vaccine!" << endl;
        dfColor();
    }
    // if (tenvc1 == 1)
    //     cout << "\t\t\t->Ten Vaccine: Vero cell." << endl;
    // else if (tenvc1 == 2)
    //     cout << "\t\t\t->Ten Vaccine: Pfizer." << endl;
    // else if (tenvc1 == 3)
    //     cout << "\t\t\t->Ten Vaccine: Astra Zecera." << endl;
    // else if (tenvc1 == 4)
    //     cout << "\t\t\t->Ten Vaccine: Abdala." << endl;
    // else if (tenvc1 == 5)
    //     cout << "\t\t\t->Ten Vaccine: Spikevax." << endl;
    // else if (tenvc1 == 6)
    //     cout << "\t\t\t->Ten Vaccine: Hayat-Vax." << endl;
    // else if (tenvc1 == 7)
    //     cout << "\t\t\t->Ten Vaccine: SPUTNIK V." << endl;
    // else if (tenvc1 == 8)
    //     cout << "\t\t\t->Ten Vaccine: Janssen." << endl;

    //     cout << "\t\t\t-> Mui 2:";
    //     if (mui2 == 0)
    //     {
    //         TextColor(4);
    //         cout << "Chua tiem." << endl;
    //         dfColor();
    //     }
    //     else if (mui2 == 1)
    //     {
    //         cout << "da tiem." << endl;
    //     }
    //     if (tenvc2 == 1)
    //         cout << "\t\t\t->Ten Vaccine: Vero cell." << endl;
    //     else if (tenvc2 == 2)
    //         cout << "\t\t\t->Ten Vaccine: Pfizer." << endl;
    //     else if (tenvc2 == 3)
    //         cout << "\t\t\t->Ten Vaccine: Astra Zecera." << endl;
    //     else if (tenvc2 == 4)
    //         cout << "\t\t\t->Ten Vaccine: Abdala." << endl;
    //     else if (tenvc2 == 5)
    //         cout << "\t\t\t->Ten Vaccine: Spikevax." << endl;
    //     else if (tenvc2 == 6)
    //         cout << "\t\t\t->Ten Vaccine: Hayat-Vax." << endl;
    //     else if (tenvc2 == 7)
    //         cout << "\t\t\t->Ten Vaccine: SPUTNIK V." << endl;
    //     else if (tenvc2 == 8)
    //         cout << "\t\t\t->Ten Vaccine: Janssen." << endl;
    // }

    if (mui2 == 1)
    {
        cout << "\t\t\t-> Mui 2: ";
        TextColor(10);
        cout << "Da tiem" << endl;
        dfColor();
        cout << "\t\t\t-> Ten Vaccine: ";
        switch (tenvc2)
        {
        case 1:
            TextColor(10);
            cout << "Vero Cell." << endl;
            dfColor();
            break;
        case 2:
            TextColor(10);
            cout << "Pfizer." << endl;
            dfColor();
            break;
        case 3:
            TextColor(10);
            cout << "Astra Zecera." << endl;
            dfColor();
            break;
        case 4:
            TextColor(10);
            cout << "Abdala." << endl;
            dfColor();
            break;
        case 5:
            TextColor(10);
            cout << "Spikevax." << endl;
            dfColor();
            break;
        case 6:
            TextColor(10);
            cout << "Hayat-Vax." << endl;
            dfColor();
            break;
        case 7:
            TextColor(10);
            cout << "SPUTNIK V." << endl;
            dfColor();
            break;
        case 8:
            TextColor(10);
            cout << "Janssen." << endl;
            dfColor();
            break;
        }
    }
    else
    {
        TextColor(4);
        cout << "\t\t\tChua tiem Vaccine!" << endl;
        dfColor();
    }
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
    cout << "-Nhap ID sinh vien (ID): ";
    getline(cin, ID);
    cout << "-Hoc lop: ";
    getline(cin, study);
    Person::Nhap();
}

void Student::Tinhtrang()
{
    if (mui1 == 1 && mui2 == 1)
        cout << "\t\t\t=> Tinh trang:An toan.";
    else if (mui1 == 1 && mui2 == 0)
        cout << "\t\t\t=> Tinh trang:Tam an toan.";
    else
        cout << "\t\t\t=> Tinh trang:Khong an toan";
}

void Student::Xuat()
{
    cout << endl
         << "**********Thong tin sinh vien va tinh trang tiem chung************" << endl;
    cout << "\t\t\t-> ID: " << ID << endl;
    cout << "\t\t\t-> Lop: " << study << endl;
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
    cout << "\n-Nhap ID giao vien (ID): ";
    getline(cin, ID);
    cout << "-Day lop: ";
    getline(cin, teach);
    Person::Nhap();
}

void Teacher::Tinhtrang()
{
    if (mui1 == 1 && mui2 == 1)
        cout << "\t\t\t=> An toan";
    else if (mui1 == 1 && mui2 == 0)
        cout << "\t\t\t=> Tam an toan.";
    else
        cout << "\t\t\t=> Khong an toan";
}

void Teacher::Xuat()
{
    cout << endl
         << "**********Thong tin giao vien va tinh trang tiem chung************" << endl;
    cout << "\t\t\t-> ID: " << ID << endl;
    cout << "\t\t\t-> Lop: " << teach << endl;
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
