#ifndef CHAT_H
#define CHAT_H

#include "User.h"
#include <map>
#include <vector>
#include <string>
using namespace std;

class Chat {
public:
    void RegisterUser(const string& username, const string& password, const string& name);
    bool LoginUser(const string& username, const string& password);
    void BroadcastMessage(const string& sender, const string& message);
    void DisplayChat();

private:
    map<string, User> users_;
    vector<pair<string, string>> messages_;
};

#endif // CHAT_H
