#include <iostream>

using namespace std;

/*
char DisplayMenu(double Balance);
double ProcessChoice(char Choice, double Balance);
double Deposit(double Balance);
double Withdraw(double Balance);
void DisplayBalance(double Balance);

int main() {
	double Balance{ 1000.0 };
	char Choice{ ' ' };

	while (true) {
		Choice = DisplayMenu(Balance);
		Balance = ProcessChoice(Choice, Balance);
		if (Choice == '4')
			break;
	}
	return 0;
}

char DisplayMenu(double Balance) {
	char Choice{ ' ' };
	cout << "Bank Account Management System" << endl;
	cout << "-------------------------------" << endl;
	cout << "Current Balance: $" << Balance << endl;
	cout << "Menu:" << endl;
	cout << "1. Deposit" << endl;
	cout << "2. Withdraw" << endl;
	cout << "3. Check Balance" << endl;
	cout << "4. Exit" << endl;
	cout << "Please enter Choice (1-4): ";
	cin >> Choice;
	cout << endl;
	return Choice;
}

double ProcessChoice(char Choice, double Balance) {
	switch (Choice) {
	case '1':
		cout << "Processing Deposit." << endl;
		Balance = Deposit(Balance);
		break;
	case '2':
		cout << "Processing Withdraw." << endl;
		Balance = Withdraw(Balance);
		break;
	case '3':
		cout << "Checking Balance." << endl;
		DisplayBalance(Balance);
		break;
	case '4':
		cout << "Exiting." << endl;
		break;
	default:
		cout << "Invalid entry.  Please try again.\n" << endl;
	}
	return Balance;
}

double Deposit(double Balance) {
	double Deposit{ 0.0 };
	cout << "Please enter deposit amount: $";
	cin >> Deposit;
	if (Deposit > 0) {
		Balance += Deposit;
		cout << "Deposit successful." << endl;
		cout << "New balance: $" << Balance << endl << endl;
	}
	else {
		cout << "Invalid deposit amount.\n" << endl;
	}
	return Balance;
}

double Withdraw(double Balance) {
	double Withdraw{ 0.0 };
	cout << "Please enter withdraw amount: $";
	cin >> Withdraw;
	if (Withdraw > 0 and Withdraw <= Balance) {
		Balance -= Withdraw;
		cout << "Withdraw successful." << endl;
		cout << "New balance: $" << Balance << endl << endl;
	}
	else {
		cout << "Invalid withdraw amount.\n" << endl;
	}
	return Balance;
}

void DisplayBalance(double Balance) {
	cout << "Current Balance: $" << Balance << endl << endl;
	return;
}

*/