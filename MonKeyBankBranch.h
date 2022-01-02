#pragma once

#include <vector>
#include "Customer.h"

class MonKeyBankBranch
{
    private:
        std::vector<Customer> _customers;
    public:
        void Test();
        void Login();
        void Start();
};