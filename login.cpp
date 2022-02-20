#include <string>
#include "login.h"

Login::Login(std::string email_, std::string pass)
{
    password = pass;
    email = email_;
}

std::string Login::getEmail()
{
    return email;
}

void Login::changePassword(std::string pass)
{
    password = pass;
}
void Login::changeEmail(std::string email_)
{
    email = email_;
}
