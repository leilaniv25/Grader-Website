#include <string>

class Login 
{
public:
    Login (std::string email_, std::string pass);

    std::string getEmail();
    void changePassword(std::string pass);
    void changeEmail(std::string email_);

private:
    std::string password;
    std::string email;
};
    