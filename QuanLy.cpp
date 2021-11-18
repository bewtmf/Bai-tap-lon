#include <iostream>
#include <string>
#include <vector>
#include "TextColor.h"
using namespace std;

// CLASS PERSON
class Person
{
protected:
    string address, name;
    int age, mui1, mui2, tenvc;

public:
    virtual void Nhap();
    virtual void Xuat();
    string getName();
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
    cout << "(1)Vero cell\t(2) Pfizer\t(3) Astra Zecera\t(4)Abdala" << endl
         << "(5) Spikevax\t(6) Hayat - Vax\t(7) SPUTNIK V\t(8) Janssen." << endl;
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
            cout << "-Mui 2: ";
            cin >> mui2;
            if (mui2 < 0 || mui2 > 1)
                cout << "Khong hop le va vui long nhap lai" << endl;
        } while (mui2 < 0 || mui2 > 1);

        do
        {
            cout << "-Ten VACCINE: ";
            cin >> tenvc;
            if (tenvc < 1 || tenvc > 8)
                cout << "Khong hop le va vui long nhap lai" << endl;
        } while (tenvc < 1 || tenvc > 8);
    }
    else
        mui2 == 0;
}

void hienthi()
{
    TextColor(12);
    cout << "---------------------------------------------------------------------------------------------------------------------"
         << "----------------------------------------------------------------------" << endl;
    printSpace(80);
    cout << "BANG DANH SACH" << endl;

    cout << "---------------------------------------------------------------------------------------------------------------------"
         << "----------------------------------------------------------------------" << endl;
    dfColor();
}

void Person::Xuat()
{
    printSpace(5);
    TextColor(3);
    cout << "Ho va Ten: ";
    dfColor();
    cout << name;
    printSpace(6);
    TextColor(3);
    cout << "Tuoi: ";
    dfColor();
    cout << age;
    printSpace(5);
    TextColor(3);
    cout << "Noi o hien tai: ";
    dfColor();
    cout << address;
    printSpace(10);
    TextColor(3);
    cout << "Mui 1: ";
    dfColor();
    if (mui1 == 1)
    {
        TextColor(10);
        cout << "Da tiem";
        dfColor();
    }
    else
    {
        TextColor(4);
        cout << "Chua tiem";
        dfColor();
    }
    printSpace(10);
    TextColor(3);
    cout << "Mui 2: ";
    dfColor();
    if (mui2 == 1)
    {
        TextColor(10);
        cout << "Da tiem";
        dfColor();
    }
    else
    {
        TextColor(4);
        cout << "Chua tiem";
        dfColor();
    }
    printSpace(5);
    TextColor(3);
    cout << "Ten Vaccine: ";
    dfColor();
    switch (tenvc)
    {
    case 1:
        TextColor(10);
        cout << "Vero Cell";
        dfColor();
        break;
    case 2:
        TextColor(10);
        cout << "Pfizer";
        dfColor();
        break;
    case 3:
        TextColor(10);
        cout << "Astra Zecera";
        dfColor();
        break;
    case 4:
        TextColor(10);
        cout << "Abdala";
        dfColor();
        break;
    case 5:
        TextColor(10);
        cout << "Spikevax";
        dfColor();
        break;
    case 6:
        TextColor(10);
        cout << "Hayat-Vax";
        dfColor();
        break;
    case 7:
        TextColor(10);
        cout << "SPUTNIK V";
        dfColor();
        break;
    case 8:
        TextColor(10);
        cout << "Janssen";
        dfColor();
        break;
    default:
        TextColor(4);
        cout << "NONE!";
        dfColor();
    }
    printSpace(5);
    TextColor(3);
    cout << "Trang thai: ";
    dfColor();
    if (mui1 == 1)
    {
        TextColor(10);
        cout << "An toan";
        dfColor();
    }
    else
    {
        TextColor(4);
        cout << "Khong an toan";
        dfColor();
    }
}

// Ham tach ten, VD: Luong Van Tanh -> getName(): Tanh
string Person::getName()
{
    string getName = name;
    string ten = "";
    while (getName[getName.length() - 1] != ' ')
    {
        ten.insert(ten.begin() + 0, getName[getName.length() - 1]);
        getName.pop_back();
    }
    getName.pop_back();
    return ten;
}

//CLASS STUDENT
class Student : public Person
{
private:
    string study;
    long ID;

public:
    void Nhap();
    void Xuat();
    int getID()
    {
        return ID;
    }

void Student::Nhap()
{
    cout << "-Nhap ID sinh vien (ID): ";
    cin >> ID;
    fflush(stdin);
    cout << "-Hoc lop: ";
    getline(cin, study);
    Person::Nhap();
}

void Student::Xuat()
{
    TextColor(3); // tim mong mo
    cout << "ID: " << ID;
    printSpace(5);
    cout << "Lop: ";
    dfColor();
    cout << study;
    Person::Xuat();
}

//CLASS TEACHER
class Teacher : public Person
{
private:
    string teach;
    int ID;

public:
    void Nhap();
    void Xuat();
};

void Teacher::Nhap()
{
    cout << "\n*********************" << endl;
    cout << "\n-Nhap ID giao vien (ID): ";
    cin >> ID;
    fflush(stdin);
    cout << "-Day lop: ";
    getline(cin, teach);
    Person::Nhap();
}

void Teacher::Xuat()
{
    cout << ID;
    cout << "\t" << teach;
    Person::Xuat();
}
//Quan ly danh sach sinh vien
class QLStudent
{
private:
    vector<Student *> Arr;

public:
    void NhapDS(int n);
    void XuatDS();
    void SortByID();
    void DeleteByID();
    void SortByName();
};

void QLStudent::NhapDS(int n)
{
    Student *sv;
    for (int i = 0; i < n; i++)
    {
        sv = new Student;
        sv->Nhap();
        Arr.push_back(sv);
    }
}

void QLStudent::XuatDS()
{
    hienthi();
    cout << endl;
    for (int i = 0; i < Arr.size(); i++)
    {
        Arr.at(i)->Xuat();
        cout << endl;
    }
}

void QLStudent::SortByID()
{
    for (int i = 0; i < Arr.size() - 1; i++)
    {
        for (int j = i + 1; j < Arr.size(); j++)
            if (Arr.at(i)->getID() > Arr.at(j)->getID())
            {
                Student *temp = Arr.at(i);
                Arr.at(i) = Arr.at(j);
                Arr.at(j) = temp;
            }
    }
    XuatDS();
}

void QLStudent::DeleteByID()
{
    int dID;
    cout << "Nhap ID muon xoa: ";
    cin >> dID;
    for (int i = 0; i < Arr.size(); i++)
    {
        if (Arr.at(i)->getID() == dID)
        {
            delete (Arr.at(i));
            TextColor(10);
            cout << "Da xoa ID: " << dID << " ra khoi danh sach!" << endl;
            dfColor();
        }
        else
        {
            TextColor(4);
            cout << "Khong tim thay ID" << endl;
            dfColor();
        }
    }
    XuatDS();
}

// Bubble sort
void QLStudent::SortByName()
{
    for (int i = 0; i < Arr.size() - 1; i++)
    {
        for (int j = i + 1; j < Arr.size(); j++)
        {
            string firstname = Arr.at(i)->getName();
            string secondname = Arr.at(j)->getName();
            if (strcmp(firstname.c_str(), secondname.c_str()) > 0)
            {
                Student *temp = Arr.at(i);
                Arr.at(i) = Arr.at(j);
                Arr.at(j) = temp;
            }
        }
    }
    XuatDS();
}
