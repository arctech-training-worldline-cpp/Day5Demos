#include "Form.h"
#include <windows.h>
#include <conio.h>
#include <iostream>
#include "ConsoleHelper.h"

// avoid "using namespace std;"" in here as it could cause lots of problems. Instead use "using std::cout;", "using std::cin;", etc.
// see https://stackoverflow.com/questions/1452721/why-is-using-namespace-std-considered-bad-practice for more details

using namespace std;

short Form::DisplayMainMenu(short left, short top)
{
    char menuId;

    consoleHelper.Clear();
    //consoleHelper.SetColor();

    // infinite loop
    do
    {
        int row = top;

        consoleHelper.SetCursorPosition(left, row++);
        cout << "= Main Menu =================";
        consoleHelper.SetCursorPosition(left, row++);
        cout << "|                           |";
        consoleHelper.SetCursorPosition(left, row++);
        cout << "|  1.New Customer           |";
        consoleHelper.SetCursorPosition(left, row++);
        cout << "|  2.New Savings Account    |";
        consoleHelper.SetCursorPosition(left, row++);
        cout << "|  3.Transactions           |";
        consoleHelper.SetCursorPosition(left, row++);
        cout << "|  4.List Customer/Accounts |";
        consoleHelper.SetCursorPosition(left, row++);
        cout << "|  5.Account Statement      |";
        consoleHelper.SetCursorPosition(left, row++);
        cout << "|  6.Exit                   |";
        consoleHelper.SetCursorPosition(left, row++);
        cout << "|                           |";
        consoleHelper.SetCursorPosition(left, row);
        cout << "=============================";

        menuId = consoleHelper.ReadKey();
    } while (!(menuId >= '1' && menuId <= '6'));

    //consoleHelper.ResetColor();

    return menuId;
}

Customer Form::DisplayNewCustomer(short left, short top)
{
    consoleHelper.Clear();
    //consoleHelper.SetColor();

    cout << "You selected menu 1" << endl;

    Customer customer;

    cout << "Code: ";
    cin >> customer.code;
    cout << "Name: ";
    cin >> customer.name;
    // cout << "Address1: ";
    // cin >> customer.address1;
    // cout << "Enter City: ";
    // cin >> customer.address2;
    // cout << "Country: ";
    // cin >> customer.country;
    // cout << "Mobile: ";
    // cin >> customer.mobile;
    // cout << "PAN: ";
    // cin >> customer.pan;
    // cout << "Email: ";
    // cin >> customer.email;
    // cout << "Date Of Birth: ";
    // cin >> customer.dateOfBirth;

    //consoleHelper.ResetColor();

    return customer;
}

void Form::DisplayNewSavingAccount(short left, short top)
{
    consoleHelper.Clear();
    cout << "You selected menu 2. Press enter to continue." << endl;
    consoleHelper.ReadEnterKey();
}

void Form::DisplayNewTransaction(short left, short top)
{
    consoleHelper.Clear();
    cout << "You selected menu 3. Press enter to continue." << endl;
    consoleHelper.ReadEnterKey();
}

/// <summary>
///
/// </summary>
/// <param name="left"></param>
/// <param name="top"></param>
/// <returns></returns>
LoginInfo Form::DisplayLogin(short left, short top)
{
    consoleHelper.Clear();
    //consoleHelper.SetColor();

    int row = top;
    consoleHelper.SetCursorPosition(left, row++);
    cout << "= Login =====================";
    consoleHelper.SetCursorPosition(left, row++);
    cout << "|                           |";
    consoleHelper.SetCursorPosition(left, row++);
    cout << "|  UserName: ____________   |";
    consoleHelper.SetCursorPosition(left, row++);
    cout << "|  Password: ____________   |";
    consoleHelper.SetCursorPosition(left, row++);
    cout << "|                           |";
    consoleHelper.SetCursorPosition(left, row);
    cout << "=============================";

    LoginInfo loginInfo;

    consoleHelper.SetCursorPosition(left + 13, top + 2);
    cin >> loginInfo.UserName;

    consoleHelper.SetCursorPosition(left + 13, top + 3);
    cin >> loginInfo.Password;

    //consoleHelper.ResetColor();

    return loginInfo;
}
