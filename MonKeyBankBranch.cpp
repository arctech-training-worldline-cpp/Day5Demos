#include "MonKeyBankBranch.h"
#include "Form.h"
#include "Report.h"
#include <iostream>

using namespace std;

void MonKeyBankBranch::Test()
{
    cout << "Enter character 1: ";
    char ch1 = getchar();

    cout << "Enter character 2: ";
    char ch2;
    cin >> ch2;

    cout << "Ch1: " << ch1 << " Ch2: " << ch2;

}

void MonKeyBankBranch::Login()
{
    Form form;
    LoginInfo loginInfo = form.DisplayLogin(45, 10);

    cout << "You entered Username=" << loginInfo.UserName << ", Password=" << loginInfo.Password << endl;
    getchar();
}

void MonKeyBankBranch::Start()
{
    Form form;
    Report report;

    int menuId;

    do
    {
        menuId = form.DisplayMainMenu(45, 10);

        switch (menuId)
        {
        case '1':
            {
                // Note: Declaring a variable directly inside a switch is not allowed
                // You have to put it inside curly braces to specify the scope
                Customer customer = form.DisplayNewCustomer(45, 10);
                _customers.push_back(customer);
            }
            break;
        case '2':
            form.DisplayNewSavingAccount(45, 10);
            break;
        case '3':
            form.DisplayNewTransaction(45, 10);
            break;
        case '4':
            report.ShowCustomerAccountList(_customers);
            break;
        case '5':
            report.ShowAccountStatement(_customers);
            break;
        case '6':
            cout << "You selected menu 6. Press Enter to ** EXIT **." << endl;
            ConsoleHelper::ReadEnterKey();
            break;
        }
    } while (menuId != '6');
}