#include "Chat.h"
#include <iostream>
using namespace std;

void Chat::RegisterUser(const string& username, const string& password, const string& name) {
    users_[username] = User(username, password, name);
}

bool Chat::LoginUser(const string& username, const string& password) {
    auto it = users_.find(username);
    if (it != users_.end() && it->second.VerifyPassword(password)) {
        cout << "Welcome, " << it->second.GetName() << "!\n";
        return true;
    }
    else {
        cout << "Invalid username or password.\n";
        return false;
    }
}

void Chat::BroadcastMessage(const string& sender, const string& message) {
    if (users_.find(sender) != users_.end()) {
        messages_.push_back({ sender, message });
    }
    else {
        cout << "Sender is not registered in the system.\n";
    }
}

void Chat::DisplayChat() {
    for (const auto& message : messages_) {
        cout << message.first << ": " << message.second << endl;
    }
}