#include <iostream>
#include <string>
#include "Person.cpp"

using namespace std;

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
    cout << "Nhap ID sinh vien (ID): ";
    getline(cin, ID);
    cout << "Hoc lop: ";
    getline(cin, study);
    Person::Nhap();
}

void Student::Tinhtrang()
{
    if (mui1 == 1 && mui2 == 1)
        cout << "			=> Tinh trang:An toan.";
    else if(mui1 == 1 && mui2 ==0)
    	cout << "			=> Tinh trang:Tam an toan.";
    else
        cout << "			=> Tinh trang:Khong an toan";
}

void Student::Xuat()
{
    cout << endl
         << "**********Thong tin sinh vien va tinh trang tiem chung************" << endl;
    cout << "			-> ID: " << ID << endl;
    cout << "			-> Lop: " << study << endl;
    Person::Xuat();
}
