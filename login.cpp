// Nhóm 24
// Nguyễn Hưng Thịnh - 6151071105
// Lương Văn Tánh - 6151071096
// Nguyễn Tấn Tài - 6151071022
#include <iostream>
#include <conio.h>
#include <fstream>
#include <string.h>
#include "hienthi.cpp"
using namespace std;
void login();
void registr();
void forgot();

void dangnhap()
{
    char choice;
    TextColor(6);
    cout << "***********************************************************************\n\n\n";
    cout << "                      Welcome to login page                               \n\n";
    cout << "*******************        MENU        *******************************\n\n";
    cout << "1.DANG NHAP" << endl;
    cout << "2.DANG KY TAI KHOAN" << endl;
    cout << "3.QUEN MAT KHAU (hoac) TEN DANG NHAP" << endl;
    cout << "4.Thoat chuong trinh" << endl;
    dfColor();
    cout << "\nNhap lua chon :";
    cin >> choice;
    cout << endl;
    switch (choice)
    {
    case '1':
        login();
        break;
    case '2':
        registr();
        break;
    case '3':
        forgot();
        break;
    case '4':
        TextColor(10);
        cout << "Cam on da su dung chuong trinh!\n\n";
        dfColor();
        cin.get();
        cin.get();
        exit(0);
        break;
    default:
        system("cls");
        TextColor(4);
        cout << "Khong hop le. Vui long chon lai!\n"
             << endl;
        dfColor();
        dangnhap();
    }
}

void login()
{
    int count;
    string user, pass, u, p;
    system("cls");
    TextColor(10);
    cout << "Dien thong tin vao cac muc ben duoi!" << endl;
    dfColor();
    cout << "USERNAME :";
    cin >> user;
    cout << "PASSWORD :";
    cin >> pass;

    ifstream input("database.txt"); // mo file database.txt de doc user va pass
    while (input >> u >> p)
    {
        if (u == user && p == pass)

        {
            count = 1;
            system("cls");
        }
    }
    input.close();
    if (count == 1)
    {
        TextColor(10);
        cout << "LOGIN SUCESS!" << endl;
        dfColor();
        cout << "\nXin chao ";
        cout << user << endl;
        cout << "\nNhan phim bat ky de bat dau chuong trinh!";
        getch();
    }
    else
    {
        TextColor(4);
        cout << "\nDang nhap that bai!\nSai ten dang nhap hoac mat khau!\n";
        dfColor();
        dangnhap();
    }
}

void registr()
{

    string reguser, regpass, ru, rp;
    system("cls");
    cout << "Dien ten dang nhap :";
    cin >> reguser;
    cout << "\nDien mat khau :";
    cin >> regpass;

    ofstream reg("database.txt", ios::app); // mo file database.txt che do append them "reguser" va "regpass" vao cuoi file
    reg << reguser << ' ' << regpass << endl;
    system("cls");
    TextColor(10);
    cout << "\nDang ky thang cong!\n";
    dfColor();
    dangnhap();
}

void forgot()
{
    char ch;
    system("cls");
    TextColor(3);
    cout << "Forgotten ? We're here for help\n";
    cout << "1. Tim lai tai khoan bang ten dang nhap." << endl;
    cout << "2. Tim lai tai khoan bang mat khau." << endl;
    cout << "3.Quay lai bang chon." << endl;
    dfColor();
    cout << "Nhap lua chon : ";
    cin >> ch;
    switch (ch)
    {
    case '1':
    {
        int count = 0;
        string searchuser, su, sp;
        cout << "\nNhap ten dang nhap ma ban nho : ";
        cin >> searchuser;

        ifstream searchu("database.txt"); // mo file database.txt de doc su va sp
        while (searchu >> su >> sp)
        {
            if (su == searchuser)
            {
                count = 1;
            }
        }
        searchu.close();
        if (count == 1)
        {
            TextColor(10);
            cout << "\n\nDa tim thay tai khoan!\n";
            dfColor();
            cout << "\nMat khau cua ban la: " << sp;
            cin.get();
            cin.get();
            system("cls");
            dangnhap();
        }
        else
        {
            TextColor(4);
            cout << "\nXin loi! He thong khong tim thay tai khoan cua ban!\n";
            dfColor();
            cin.get();
            cin.get();
            dangnhap();
        }
        break;
    }
    case '2':
    {
        int count = 0;
        string searchpass, su2, sp2;
        cout << "\nNhap mat khau ma ban nho : ";
        cin >> searchpass;

        ifstream searchp("database.txt");
        while (searchp >> su2 >> sp2)
        {
            if (sp2 == searchpass)
            {
                count = 1;
            }
        }
        searchp.close();
        if (count == 1)
        {
            TextColor(10);
            cout << "\nDa tim thay tai khoan!\n";
            dfColor();
            cout << "\nTen dang nhap cua ban la : " << su2;
            cin.get();
            cin.get();
            system("cls");
            dangnhap();
        }
        else
        {
            TextColor(4);
            cout << "Xin loi! He thong khong tim thay mat khau tuong xung! \n";
            dfColor();
            cin.get();
            cin.get();
            dangnhap();
        }

        break;
    }

    case '3':
    {
        cin.get();
        dangnhap();
    }
    default:
        TextColor(4);
        cout << "Khong hop le vui long nhap lai!" << endl;
        dfColor();
        forgot();
    }
}