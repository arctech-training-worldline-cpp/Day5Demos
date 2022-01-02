// Shift+Alt+F => Format document
// "#pragma once" is required to prevent duplication import of header files. This may not be supported on all compilers
// if "#pragma once" is not supported
// then use #ifndef HEADERFILE_H / #endif in the header file. e.g.
// #ifndef FORM_H
// #define FORM_H
//   .. The header file code
// #endif
//
#pragma once
#include <string>
#include "Customer.h"
#include "LoginInfo.h"
#include "ConsoleHelper.h"

class Form
{
private:
    ConsoleHelper consoleHelper;

public:
    short DisplayMainMenu(short left, short top);
    void DisplayNewTransaction(short left, short top);
    void DisplayNewSavingAccount(short left, short top);
    Customer DisplayNewCustomer(short left, short top);
    LoginInfo DisplayLogin(short left, short top);
    LoginInfo DisplayLoginDesignImprovement(short left, short top);
    void DisplayTextAt(std::string text, short left, short top);
    std::string ReadTextAt(short left, short top);
};