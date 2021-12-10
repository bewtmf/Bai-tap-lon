// Nhóm 24
// Nguyễn Hưng Thịnh - 6151071105
// Lương Văn Tánh - 6151071096
// Nguyễn Tấn Tài - 6151071022
#include <iostream>
#include "TextColor.h"
#include <Windows.h>
#include <time.h>
using namespace std;

void ChuongTrinh()
{
    int x, x1, x2;
    srand(time(NULL));
    x = rand() % 6 + 1;
    TextColor(x);
    // QUAN
    gotoxy(30, 5);
    cout << " #####  #     #    #    #     #";
    gotoxy(30, 6);
    cout << "#     # #     #   # #   ##    #";
    gotoxy(30, 7);
    cout << "#     # #     #  #   #  # #   #";
    gotoxy(30, 8);
    cout << "#     # #     # #     # #  #  #";
    gotoxy(30, 9);
    cout << "#   # # #     # ####### #   # #";
    gotoxy(30, 10);
    cout << "#    #  #     # #     # #    ##";
    gotoxy(30, 11);
    cout << " #### #  #####  #     # #     #";
    // 62
    //  LY
    gotoxy(72, 5);
    cout << "#       #     #";
    gotoxy(72, 6);
    cout << "#        #   # ";
    gotoxy(72, 7);
    cout << "#         # #  ";
    gotoxy(72, 8);
    cout << "#          #   ";
    gotoxy(72, 9);
    cout << "#          #   ";
    gotoxy(72, 10);
    cout << "#          #   ";
    gotoxy(72, 11);
    cout << "#######    #   ";

    // SINH
    do
    {
        x1 = rand() % 6 + 1;
    } while (x1 == x);
    TextColor(x1);
    gotoxy(20, 13);
    cout << " #####  ### #     # #     #";
    gotoxy(20, 14);
    cout << "#     #  #  ##    # #     #";
    gotoxy(20, 15);
    cout << "#        #  # #   # #     #";
    gotoxy(20, 16);
    cout << " #####   #  #  #  # #######";
    gotoxy(20, 17);
    cout << "      #  #  #   # # #     #";
    gotoxy(20, 18);
    cout << "#     #  #  #    ## #     #";
    gotoxy(20, 19);
    cout << " #####  ### #     # #     #";

    // 48
    //  VIEN
    gotoxy(58, 13);
    cout << "#     # ### ####### #     #";
    gotoxy(58, 14);
    cout << "#     #  #  #       ##    #";
    gotoxy(58, 15);
    cout << "#     #  #  #       # #   #";
    gotoxy(58, 16);
    cout << "#     #  #  #####   #  #  #";
    gotoxy(58, 17);
    cout << " #   #   #  #       #   # #";
    gotoxy(58, 18);
    cout << "  # #    #  #       #    ##";
    gotoxy(58, 19);
    cout << "   #    ### ####### #     #";

    // 76
    // VA
    TextColor(7);
    gotoxy(48, 21);
    cout << "#     #    #   ";
    gotoxy(48, 22);
    cout << "#     #   # #  ";
    gotoxy(48, 23);
    cout << "#     #  #   # ";
    gotoxy(48, 24);
    cout << "#     # #     #";
    gotoxy(48, 25);
    cout << " #   #  #######";
    gotoxy(48, 26);
    cout << "  # #   #     #";
    gotoxy(48, 27);
    cout << "   #    #     #";

    // GIANG
    do
    {
        x2 = rand() % 6 + 1;
    } while (x2 == x || x2 == x1);
    TextColor(x2);
    gotoxy(20, 29);
    cout << " #####  ###    #    #     #  ##### ";
    gotoxy(20, 30);
    cout << "#     #  #    # #   ##    # #     #";
    gotoxy(20, 31);
    cout << "#        #   #   #  # #   # #      ";
    gotoxy(20, 32);
    cout << "#  ####  #  #     # #  #  # #  ####";
    gotoxy(20, 33);
    cout << "#     #  #  ####### #   # # #     #";
    gotoxy(20, 34);
    cout << "#     #  #  #     # #    ## #     #";
    gotoxy(20, 35);
    cout << " #####  ### #     # #     #  ##### ";

    // 56
    // VIEN
    gotoxy(66, 29);
    cout << "#     # ### ####### #     #";
    gotoxy(66, 30);
    cout << "#     #  #  #       ##    #";
    gotoxy(66, 31);
    cout << "#     #  #  #       # #   #";
    gotoxy(66, 32);
    cout << "#     #  #  #####   #  #  #";
    gotoxy(66, 33);
    cout << " #   #   #  #       #   # #";
    gotoxy(66, 34);
    cout << "  # #    #  #       #    ##";
    gotoxy(66, 35);
    cout << "   #    ### ####### #     #";

    cout << "\n\n";
    TextColor(10);
    cout << endl
         << "Nhan phim bat ky de bat dau chuong trinh.";
    getch();
    system("cls");
}
