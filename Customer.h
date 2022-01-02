#pragma once
#include <string>

// never use "using namespace std;" in the header files as it could cause lots of problems
// see https://stackoverflow.com/questions/1452721/why-is-using-namespace-std-considered-bad-practice for more details

class Customer
{
public:
    std::string code;
    std::string name;
    std::string address1;
    std::string address2;
    std::string country;
    std::string mobile;
    std::string pan;
    std::string email;
    std::string dateOfBirth;
};