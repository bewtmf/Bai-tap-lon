#include <Windows.h> // Them thu vien window de su dung HANLE; GetStdHandle...

void TextColor(int x)
{
    HANDLE ColorID;
    ColorID = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(ColorID, x);
}

void dfColor() // tra color ve mau mac dinh cua console
{
    HANDLE color;
    color = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(color, 15);
}

void printSpace(int n)
{
    for (int i = 0; i < n; i++)
        std::cout << " ";
}

void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}