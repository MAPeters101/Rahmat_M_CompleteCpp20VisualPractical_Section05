#include <iostream>

using namespace std;

char DisplayMenu(int Balance) {
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

int main() {
	double Balance{ 1000.0 };
	char Choice{ ' ' };

	while (true) {
		Choice = DisplayMenu(Balance);
		if (Choice == '4')
			break;
	}
	return 0;
}