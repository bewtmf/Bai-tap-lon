#include <iostream>
#include <string>
using namespace std;

class Person
{
protected:
    string name, address;
    int age, mui1, mui2, Tenvx;

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
    getline(cin,address);
    do
    {
    	cout << "Tuoi:";
    	cin >> age;
    	if(age < 12 || age > 150)
    		cout << "Khong hop le de tiem va vui lop nhap lai:" << endl;
	}
	while (age < 12 || age > 150);
	
	    fflush(stdin);
    cout << "*****Nhap 0 neu tiem Pfizer(USA) va nhap 1 neu tiem Verocell(TQ)*****" << endl;
    do{
	
    cout << "Nhap ten thuoc tiem Vaccine:" ;
    cin>>Tenvx;
    if (Tenvx < 0 || Tenvx > 1 )
    	cout << "Khong hop le vui long nhap lai!" << endl;
	}
	while (Tenvx < 0 || Tenvx >1);
	
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
    cout << "			-> Ten vacxin:";
    if (Tenvx == 0)
    	cout << "Pfizer(USA) co muc do hieu luc la 95%." << endl;
    else if
    	(Tenvx == 1)
    	cout <<"Verocell(TQ)co muc do hieu luc la 79%." << endl;
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
