#pragma once

#include <string>

// never use "using namespace std;" in the header files as it could cause lots of problems of ambiguity errors
// see https://stackoverflow.com/questions/1452721/why-is-using-namespace-std-considered-bad-practice for more details

class LoginInfo
{
public:
    std::string UserName;
    std::string Password;
};