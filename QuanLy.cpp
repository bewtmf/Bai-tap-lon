// Nhóm 24
// Nguyễn Hưng Thịnh - 6151071105
// Lương Văn Tánh - 6151071096
// Nguyễn Tấn Tài - 6151071022
#include <iostream>
#include <string>
#include <vector>
#include "login.cpp"
#include <fstream>
using namespace std;

// CLASS PERSON
class Person
{
protected:
    string address, name;
    int age, mui1, mui2, tenvc;
    int level; // them bien level - chinh sua bai tap lon

public:
    virtual void Nhap();
    virtual void Xuat();
    string getName();
    string getFullName()
    {
        return name;
    }
};

void Person::Nhap()
{
    fflush(stdin);
    cout << "-Nhap ho ten: ";
    getline(cin, name);
    cout << "-Nhap noi o hien tai: ";
    getline(cin, address);
    // Cap do khu vuc - chinh sua bai tap lon
    TextColor(3);
    cout << "Level 1: Nguy co thap - Vung xanh." << endl;
    cout << "Level 2: Nguy co trung binh - Vung vang." << endl;
    cout << "Level 3: Nguy co cao - Vung cam." << endl;
    cout << "Level 4: Nguy co rat cao - Vung do." << endl;
    dfColor();
    do
    {
        cout << "Muc do canh bao: ";
        cin >> level;
        if (level < 1 || level > 4)
        {
            TextColor(4);
            cout << "Khong hop le vui long nhap lai!" << endl;
            dfColor();
        }

    } while (level < 1 || level > 4);
    do
    {
        cout << "-Tuoi: ";
        cin >> age;
        if (age < 12 || age > 150)
            cout << "Khong hop le de tiem va vui lop nhap lai:" << endl;
    } while (age < 12 || age > 150);
    TextColor(4);
    cout << "*Ghi chu:" << endl;
    dfColor();
    TextColor(10);
    cout << "----------Nhap 0 neu chua tiem va nhap 1 neu da tiem----------" << endl;
    cout << "----------Nhap 1 den 8 de chon VACCINE!----------" << endl;
    dfColor();
    cout << "(1)Vero cell\t(2) Pfizer\t(3) Astra Zecera\t(4)Abdala" << endl
         << "(5) Spikevax\t(6) Hayat - Vax\t(7) SPUTNIK V\t(8) Janssen." << endl;

    // Nhap vaccine
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
    cout << "Cap do khu vuc: ";
    dfColor();

    // Trang thai - chinh sua bai tap lon
    switch (level)
    {
    case 1:
        TextColor(10);
        cout << "Vung xanh!";
        dfColor();
        break;
    case 2:
        TextColor(14);
        cout << "Vung vang!";
        dfColor();
        break;
    case 3:
        TextColor(12);
        cout << "Vung cam!";
        dfColor();
        break;
    case 4:
        TextColor(4);
        cout << "Vung do!";
        dfColor();
        break;
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

// CLASS STUDENT
class Student : public Person
{
private:
    string study;
    string ID;

public:
    void Nhap();
    void Xuat();
    string getID()
    {
        return ID;
    }
};

void Student::Nhap()
{
    fflush(stdin);
    cout << "\n------------------------------------" << endl;
    do
    {
        cout << "-Nhap ID sinh vien (Khong qua 10 ky tu!): ";
        getline(cin, ID);
        if (ID.length() > 10)
        {
            TextColor(4);
            cout << "Vuot qua 10 ky tu!!" << endl;
            dfColor();
        }
    } while (ID.length() > 10);
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

// CLASS TEACHER
class Teacher : public Person
{
private:
    string teach;
    string ID;

public:
    void Nhap();
    void Xuat();
    string getID()
    {
        return ID;
    }
};

void Teacher::Nhap()
{
    fflush(stdin);
    cout << "\n------------------------------------" << endl;
    cout << "\n-Nhap ID giang vien (ID): ";
    getline(cin, ID);
    fflush(stdin);
    cout << "-Day lop: ";
    getline(cin, teach);
    Person::Nhap();
}

void Teacher::Xuat()
{
    TextColor(3);
    cout << "ID: " << ID;
    printSpace(5);
    cout << "Day lop: ";
    dfColor();
    cout << teach;
    Person::Xuat();
}

void hienthi()
{
    TextColor(12);
    printSpace(80);
    cout << "BANG DANH SACH" << endl;

    cout << "---------------------------------------------------------------------------------------------------------------------"
         << "----------------------------------------------------------------------" << endl;
    dfColor();
}

// Quan ly danh sach sinh vien
class QLStudent
{
private:
    vector<Student *> Arr;

public:
    void NhapDS(int n);
    void XuatDS();
    void SortByID();
    void FindByID();
    void DeleteByID();
    void SortByName();
    void FindByName();
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
    TextColor(12);
    cout << "---------------------------------------------------------------------------------------------------------------------"
         << "----------------------------------------------------------------------" << endl;
    dfColor();
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
    TextColor(10);
    cout << "Sap xep thanh cong!" << endl;
    dfColor();
    XuatDS();
}

void QLStudent::FindByID()
{
    int count = 0;
    string fID;
    fflush(stdin);
    cout << "Nhap ID can tim: ";
    getline(cin, fID);
    TextColor(3);
    cout << "---------------------------------------------------------------------------------------------------------------------"
         << "----------------------------------------------------------------------" << endl;
    dfColor();
    for (int i = 0; i < Arr.size(); i++)
    {
        if (Arr.at(i)->getID() == fID)
        {
            Arr.at(i)->Xuat();
            cout << endl;
            count++;
        }
    }
    TextColor(3);
    cout << "---------------------------------------------------------------------------------------------------------------------"
         << "----------------------------------------------------------------------" << endl;
    dfColor();
    if (count == 0)
    {
        TextColor(4);
        cout << "Khong co ID '";
        cout << fID;
        cout << "' trong danh sach!" << endl;
        dfColor();
    }
}

void QLStudent::DeleteByID()
{
    int count = 0;
    string dID;
    fflush(stdin);
    cout << "Nhap ID muon xoa: ";
    getline(cin, dID);
    for (int i = 0; i < Arr.size(); i++)
    {
        if (Arr.at(i)->getID() == dID)
        {
            Arr.erase(Arr.begin() + i);
            TextColor(10);
            cout << "Da xoa ID: " << dID << " ra khoi danh sach!" << endl;
            dfColor();
            count++;
        }
    }
    if (count == 0)
    {
        TextColor(4);
        cout << "Khong tim thay ID!" << endl;
        dfColor();
    }
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

void QLStudent::FindByName()
{
    int count = 0;
    string fName;
    fflush(stdin);
    cout << "Nhap ten sinh vien can tim: ";
    getline(cin, fName);
    TextColor(3);
    cout << "---------------------------------------------------------------------------------------------------------------------"
         << "----------------------------------------------------------------------" << endl;
    dfColor();
    for (int i = 0; i < Arr.size(); i++)
    {
        if (Arr.at(i)->getName() == fName || Arr.at(i)->getFullName() == fName)
        {
            Arr.at(i)->Xuat();
            cout << endl;
            count++;
        }
    }
    if (count == 0)
    {
        TextColor(4);
        cout << "Khong co ten '";
        cout << fName;
        cout << "' trong danh sach!" << endl;
        dfColor();
    }
    TextColor(3);
    cout << "---------------------------------------------------------------------------------------------------------------------"
         << "----------------------------------------------------------------------" << endl;
    dfColor();
}

class QLTeacher
{
private:
    vector<Teacher *> Arr;

public:
    void NhapDS(int n);
    void XuatDS();
    void SortByID();
    void FindByID();
    void DeleteByID();
    void SortByName();
    void FindByName();
};

void QLTeacher::NhapDS(int n)
{
    Teacher *gv;
    for (int i = 0; i < n; i++)
    {
        gv = new Teacher;
        gv->Nhap();
        Arr.push_back(gv);
    }
}

void QLTeacher::XuatDS()
{
    hienthi();
    cout << endl;
    for (int i = 0; i < Arr.size(); i++)
    {
        Arr.at(i)->Xuat();
        cout << endl;
    }
    TextColor(12);
    cout << "---------------------------------------------------------------------------------------------------------------------"
         << "----------------------------------------------------------------------" << endl;
    dfColor();
}

void QLTeacher::SortByID()
{
    for (int i = 0; i < Arr.size() - 1; i++)
    {
        for (int j = i + 1; j < Arr.size(); j++)
            if (Arr.at(i)->getID() > Arr.at(j)->getID())
            {
                Teacher *temp = Arr.at(i);
                Arr.at(i) = Arr.at(j);
                Arr.at(j) = temp;
            }
    }
    TextColor(10);
    cout << "Sap xep thanh cong!" << endl;
    dfColor();
    XuatDS();
}

void QLTeacher::FindByID()
{
    int count = 0;
    string fID;
    fflush(stdin);
    cout << "Nhap ID can tim: ";
    getline(cin, fID);
    TextColor(3);
    cout << "---------------------------------------------------------------------------------------------------------------------"
         << "----------------------------------------------------------------------" << endl;
    dfColor();
    for (int i = 0; i < Arr.size(); i++)
    {
        if (Arr.at(i)->getID() == fID)
        {
            Arr.at(i)->Xuat();
            cout << endl;
            count++;
        }
    }
    TextColor(3);
    cout << "---------------------------------------------------------------------------------------------------------------------"
         << "----------------------------------------------------------------------" << endl;
    dfColor();
    if (count == 0)
    {
        TextColor(4);
        cout << "Khong co ID '";
        cout << fID;
        cout << "' trong danh sach!" << endl;
        dfColor();
    }
}

void QLTeacher::DeleteByID()
{
    int count = 0;
    string dID;
    fflush(stdin);
    cout << "Nhap ID muon xoa: ";
    getline(cin, dID);
    for (int i = 0; i < Arr.size(); i++)
    {
        if (Arr.at(i)->getID() == dID)
        {
            Arr.erase(Arr.begin() + i);
            TextColor(10);
            cout << "Da xoa ID: " << dID << " ra khoi danh sach!" << endl;
            dfColor();
            count++;
        }
    }
    if (count == 0)
    {
        TextColor(4);
        cout << "Khong tim thay ID!" << endl;
        dfColor();
    }
}

// Bubble sort
void QLTeacher::SortByName()
{
    for (int i = 0; i < Arr.size() - 1; i++)
    {
        for (int j = i + 1; j < Arr.size(); j++)
        {
            string firstname = Arr.at(i)->getName();
            string secondname = Arr.at(j)->getName();
            if (strcmp(firstname.c_str(), secondname.c_str()) > 0)
            {
                Teacher *temp = Arr.at(i);
                Arr.at(i) = Arr.at(j);
                Arr.at(j) = temp;
            }
        }
    }
    XuatDS();
}

void QLTeacher::FindByName()
{
    int count = 0;
    string fName;
    fflush(stdin);
    cout << "Nhap ten giang vien can tim: ";
    getline(cin, fName);
    TextColor(3);
    cout << "---------------------------------------------------------------------------------------------------------------------"
         << "----------------------------------------------------------------------" << endl;
    dfColor();
    for (int i = 0; i < Arr.size(); i++)
    {
        if (Arr.at(i)->getName() == fName || Arr.at(i)->getFullName() == fName)
        {
            Arr.at(i)->Xuat();
            cout << endl;
            count++;
        }
    }
    if (count == 0)
    {
        TextColor(4);
        cout << "Khong co ten '";
        cout << fName;
        cout << "' trong danh sach!" << endl;
        dfColor();
    }
    TextColor(3);
    cout << "---------------------------------------------------------------------------------------------------------------------"
         << "----------------------------------------------------------------------" << endl;
    dfColor();
}