#ifndef USER_H
#define USER_H

#include <string>
using namespace std;

class User {
public:
    User() = default;
    User(const string& login, const string& password, const string& name);

    bool VerifyPassword(const string& password) const;
    string GetName() const;

private:
    string login_;
    string password_;
    string name_;
};

#endif // USER_H

