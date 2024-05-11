#include "User.h"
using namespace std;

User::User(const string& login, const string& password, const string& name)
    : login_(login), password_(password), name_(name) {}

bool User::VerifyPassword(const string& password) const {
    return password_ == password;
}

string User::GetName() const {
    return name_;
}