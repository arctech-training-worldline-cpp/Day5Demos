#pragma once
#include <vector>
#include "Customer.h"

class Report
{
public:
    void ShowCustomerAccountList(std::vector<Customer> customers);
    void ShowAccountStatement(std::vector<Customer> customers);
};