#include <iostream>
#include "QuanLy.cpp"

int main()
{
    QLStudent a;
    a.NhapDS();
    a.XuatDS();
    cout << "\nSap xep: " << endl;
    a.SortByID();
    a.DeleteByID();
}