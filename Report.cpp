#include "Report.h"
#include "ConsoleHelper.h"
#include <iostream>

using namespace std;

void Report::ShowCustomerAccountList(std::vector<Customer> customers)
{
    cout << "You selected menu 4" << endl;
    cout << "==============================" << endl;
    for (Customer customer : customers)
    {
        cout << "Code=" << customer.code << ", Name=" << customer.name << endl;
    }
    cout << "==============================" << endl;
    cout << "Press enter to continue." << endl;
    ConsoleHelper::ReadEnterKey();
}

void Report::ShowAccountStatement(std::vector<Customer> customers)
{
    cout << "You selected menu 5. Press enter to continue." << endl;
    ConsoleHelper::ReadEnterKey();
}