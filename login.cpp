#include <string>
#include "login.h"

Login::Login(std::string user, std::string pass)
{
    username = user;
    password = pass;
}
Login::Login(std::string user, std::string pass, std::string email_)
{
    username = user;
    password = pass;
    email = email_;
}

std::string Login::getUser()
{
    return username;
}

void Login::changeUser(std::string user)
{
    username = user;
}
void Login::changePassword(std::string pass)
{
    password = pass;
}
void Login::changeEmail(std::string email_)
{
    email = email_;
}
