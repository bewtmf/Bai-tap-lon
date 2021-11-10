#include <iostream>
#include <string>
#include <Windows.h> // Them thu vien window de su dung HANLE; GetStdHandle...
using namespace std;
void Menu()
{
    system("cls");
    cout << "\n\n\t\t====== MENU ======";
    cout << "\n1. Doi tuong la sinh vien";
    cout << "\n2. Doi tuong la giang vien";
    cout << "\n3. Xuat danh sach sinh vien va giang vien";
    cout << "\n0. Ket thuc";
    cout << "\n\n\t\t====== END ======";
}

void TextColor(int x)
{
    HANDLE ColorID;
    ColorID = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(ColorID, x);
}
