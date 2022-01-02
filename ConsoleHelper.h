#pragma once

#include <windows.h>

class ConsoleHelper
{
public:
    void SetCursorPosition(short x, short y);
    void Clear();
    static void ReadEnterKey();
    static char ReadKey();
};
