#include <iostream>
#include "Class.h"
#include <windows.h>
using namespace std;

void displayContacts() {
	
	cout << "\t\t\t\t--------------Contacts------------\n";
	cout << "\t\t\t\t- 1) Tom                         -\n";
	cout << "\t\t\t\t- 2) Emily                       -\n";
	cout << "\t\t\t\t- 3) Rachel                      -\n";
	cout << "\t\t\t\t- 4) Chandler                    -\n";
	cout << "\t\t\t\t- 5) Joanna                      -\n";
	cout << "\t\t\t\t- 6) Monika                      -\n";
	cout << "\t\t\t\t----------------------------------\n";

}

void displayMenu() {
	cout << "\n\n\t\t\t\t-----------------MENU-----------------\n";
	cout << "\t\t\t\t- 1) Contacts                        -\n";
	cout << "\t\t\t\t- 2) Get a call                      -\n";
	cout << "\t\t\t\t- 3) Send a notification             -\n";
	cout << "\t\t\t\t- 4) Turn on a location              -\n";
	cout << "\t\t\t\t- 5) Settings                        -\n";
	cout << "\t\t\t\t- 6) Exit                            -\n";
	cout << "\t\t\t\t--------------------------------------\n";
	cout << "\nEnter your choice: ";
}

void settings() {
	//char choice3;
	cout << "\n\n\t\t\t\t-------------Settings-------------\n";
	cout << "\t\t\t\t- 1) Set your own default message    -\n";
	cout << "\t\t\t\t- 2) See a default message           -\n";
	cout << "\t\t\t\t- 3) Exit                            -\n";
	cout << "\t\t\t\t----------------------------------\n";
	//cout << "\nEnter your choice: ";
	//cin >> choice3;
}

char getChoice(char max) {
	char choice;
	cin >> choice;
	while (choice < '1' or choice > max) {
		cout << "Choice must be between 1 and " << max << ". " << "Please re-enter your choice: ";
		cin >> choice;
	}
	return choice;
}
string case2(char a) {
	string b;
	if (a == '1') { b = "Tom"; }
	else if (a == '2') { b = "Emily"; }
	else if (a == '3') { b = "Rachel"; }
	else if (a == '4') { b = "Chandler"; }
	else if (a == '5') { b = "Joanna"; }
	else if (a == '6') { b = "Monika"; }
	return b;
}

string case3(char a) {
	string b;

	if (a == '1') { b = "You have send a notification to Tom";  }
	else if (a == '2') { b = "You have send a notification to Emily";  }
	else if (a == '3') { b = "You have send a notification to Rachel"; }
	else if (a == '4') { b = "You have send a notification to Chandler"; }
	else if (a == '5') { b = "You have send a notification to Joanna";}
	else if (a == '6') { b = "You have send a notification to Monika"; }
	return b;
	
}

string case5(char a) {
	string b;
	if (a == '1') {
		cout << "Enter your default message: " << endl; cin >> b;
		cout << "The new default message is: ";
		//return b;
	}
	else if (a == '2') { b = "If you see this message, then I am in danger. Help me out! Here is my location!"; return b; }
	//else if (a == '3') { b = "\nBack? (Y/N): "; }
	return b;
}

void function() {cout << "\nBack? (Y/N): ";}

void later() {cout << "1 minute later..." << endl << endl;}



int main() {
	system("COLOR B");
	loginManager loginObject;
	loginObject.login();
	char c, l;
	
	char choice2, choice3, choice5;
	
	do {
		
		displayMenu();
		char max_choice = '6';
		char choice = getChoice(max_choice);


		switch (choice) {
		case '1':
			displayContacts();
			function();
			break;

		case '2':
			cout << "Who do you want to receive a call from? " << endl;
			displayContacts();
			cout << "Enter your choice: ";
			choice2 = getChoice(max_choice);
			//cout << case2(choice2);
			later();
			//cout << case2(choice2);
			cout <<case2(choice2) << " is calling..." << endl;
			function();
			break;

		case '3':
			cout << "Send a notification to: " << endl;
			displayContacts();
			cout << "Enter your choice: ";
			choice3 = getChoice(max_choice);
			cout << case3(choice3);
			function();
			break;
			
		case'4':
			cout << "Do you want to turn on your location? (Y/N): " << endl;
			cin >> l;
			if (l == 'Y' or l == 'y') { cout << "Location is turned on" << endl; }
			else { cout << "Location is turned off" << endl<< endl; }
			function();
			break;

		case '5':
			settings();
			cout << "Enter your choice: ";
			choice5 = getChoice('3');
			cout << case5(choice5)<< endl;
			function();
			break;
			
		case '6':
			cout << "Thank you for using Dekall!" << endl;
			system("Pause");
			break;
		}
		cin >> c;
		system("cls");
	} while (c == 'y' or c == 'Y');
	return 0;
}