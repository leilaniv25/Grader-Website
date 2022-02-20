#include <string>

class Login 
{
public:
    Login (std::string user, std::string pass);
    Login (std::string user, std::string pass, std::string email);

    std::string getUser();
    void changeUser(std::string user);
    void changePassword(std::string pass);
    void changeEmail(std::string email_);

private:
    std::string username;
    std::string password;
    std::string email;
};
    