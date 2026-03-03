#include <iostream>
#include <string>

using namespace std;

int main() {
    string username, password, password_confirm;
    string entered_username, entered_password;

    cout << "Enter your username: ";
    cin >> username;

    do {
        cout << "Enter your password: ";
        cin >> password;

        cout << "Confirm your password: ";
        cin >> password_confirm;

        if (password != password_confirm) {
            cout << "Passwords do not match. Please try again.\n";
        }
    } while (password != password_confirm);

    cout << "Registration successful!\n\n";

    do {
        cout << "Login\n";
        cout << "Username: ";
        cin >> entered_username;

        cout << "Password: ";
        cin >> entered_password;

        if (entered_username != username || entered_password != password) {
            cout << "Incorrect username or password. Please try again.\n\n";
        }
    } while (entered_username != username || entered_password != password);

    cout << "Login successful! Welcome, " << username << "!\n";

    return 0;
}