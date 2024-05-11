#include <iostream>
#include "Chat.h"
#include <string>
using namespace std;

int main() {
    Chat chat;
    string username, password, message;

    chat.RegisterUser("Bogdan", "4321", "Bogdan");
    chat.RegisterUser("Maksim", "5566", "Maksim");

    cout << "Enter the user name: ";
    cin >> username;
    cout << "Enter the password: ";
    cin >> password;

    if (chat.LoginUser(username, password)) {
        cout << "Enter your sentence: ";
        cin.ignore();
        getline(cin, message);
        chat.BroadcastMessage(username, message);
    }
    else {
        cout << "Invalid password.\n";
    }

    return 0;
}