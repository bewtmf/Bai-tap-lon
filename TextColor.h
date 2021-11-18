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