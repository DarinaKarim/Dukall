#pragma once
#include <iostream>
using namespace std;

class loginManager {
private:
	string password = "password";
	string username = "user@gmail.com";
	bool accessGranted;

public:
	string usernameAttempt;
	string passwordAttempt;
	loginManager() {
		accessGranted = 0;
	}

	void login() {
	ioPoint:
		cout << "Username: ";
		cin >> usernameAttempt;
		if (usernameAttempt == username) {
			cout << "Password: ";
			cin >> passwordAttempt;
			if (passwordAttempt == password) {
				cout << "Login successful!" << endl;
				system("PAUSE");
				system("cls");
			}
			else {
				cout << "Incorrect password! Please, try again." << endl;
				system("PAUSE");
				system("cls");
				goto ioPoint;
			}
		}
		else {
			cout << "Incorrect username! Please, try again." << endl;
			system("PAUSE");
			system("cls");
			goto ioPoint;
		}
	}
};

