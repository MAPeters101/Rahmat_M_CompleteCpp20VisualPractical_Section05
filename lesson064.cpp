#include <iostream>
#include <format>

using namespace std;


int main() {
	double Balance{ 1000.0 };
	char Choice{};

	while (true) {
		cout << "Bank Account Management System" << endl;
		cout << "-------------------------------" << endl;
		cout << std::format("Current Balance: ${:02}", Balance) << endl;
		cout << "Menu:" << endl;
		cout << "1. Deposit" << endl;
		cout << "2. Withdraw" << endl;
		cout << "3. Check Balance" << endl;
		cout << "4. Exit" << endl;
		cout << "Please enter Choice (1-4): ";
		cin >> Choice;
		cout << endl;

		switch (Choice) {
		case '1':
			double DepositAmount;
			cout << "Enter deposit amount: $";
			cin >> DepositAmount;
			if (DepositAmount > 0) {
				Balance += DepositAmount;
				cout << "Deposit successful." << endl;
			}
			else {
				cout << "Invalid deposit amount." << endl;
			}
			break;
		default:
			break;

		}

	}

	return 0;
}



