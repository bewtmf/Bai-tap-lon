#include <iostream>
#include <string>
using namespace std;

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
    cout << "Nhap noi o hien tai: ";
    getline(cin,address);
    do
    {
    	cout << "Tuoi:";
    	cin >> age;
    	if(age < 18 || age > 150)
    		cout << "Khong hop le de tiem va vui lop nhap lai:" << endl;
	}
	while (age < 18 || age > 150);
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
    cout << "Ho ten: " << name << endl;
    cout << "Noi o hien tai: " << address << endl;
    cout << "So tuoi:" << age << endl;
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
        cout << "An toan";
    else if(mui1 == 1 && mui2 ==0)
    	cout << "Tam an toan.";
    else
        cout << "Khong an toan";
}

void Student::Xuat()
{
    cout << endl
         << "**********Thong tin sinh vien************" << endl;
    cout << "ID: " << ID << endl;
    cout << "Lop: " << study << endl;
    Person::Xuat();
}

//teacher

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
    else if(mui1 == 1 && mui2 ==0)
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


int main()
{
    Student a;
    a.Nhap();
    a.Xuat();
    a.Tinhtrang();
    Teacher b;
    b.Nhap();
    b.Xuat();
    b.Tinhtrang();
}
