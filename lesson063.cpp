#include <iostream>

using namespace std;

char DisplayMenu(double Balance);
void ProcessChoice(char Choice, double Balance);
double Deposit(double Balance);


int main() {
	double Balance{ 1000.0 };
	char Choice{ ' ' };

	while (true) {
		Choice = DisplayMenu(Balance);
		ProcessChoice(Choice, Balance);
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
	cout << "Please enter Choice: ";
	cin >> Choice;
	cout << endl;
	return Choice;
}

void ProcessChoice(char Choice, double Balance) {
	switch (Choice) {
	case '1':
		cout << "Processing Deposit.\n" << endl;
		Balance = Deposit(Balance);
		break;
	case '2':
		cout << "Processing Withdraw.\n" << endl;
		break;
	case '3':
		cout << "Checking Balance.\n" << endl;
		break;
	case '4':
		cout << "Exiting.\n" << endl;
		break;
	default:
		cout << "Invalid entry.  Please try again.\n" << endl;
	}
}

double Deposit(double Balance) {
	double Deposit{ 0.0 };
	cout << "Please enter deposit amount: ";
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

