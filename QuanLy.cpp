#include <iostream>
#include <string>
#include "Person.cpp"
#include "Student.cpp"
#include "Teacher.cpp"
using namespace std;

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
