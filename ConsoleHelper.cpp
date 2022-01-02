#include "ConsoleHelper.h"
#include <iostream>
#include<limits>

using namespace std;

void ConsoleHelper::SetCursorPosition(short x, short y)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos = {x, y};
    SetConsoleCursorPosition(hConsole, pos);
}

void ConsoleHelper::Clear()
{
    system("CLS");
}

void ConsoleHelper::ReadEnterKey()
{
    while ((getchar()) != '\n');
}

char ConsoleHelper::ReadKey()
{
    char ch;
    cin >> ch;

    cin.sync();

    return ch;
}