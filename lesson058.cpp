#include <iostream>

using namespace std;

int main() {
	int Choice{ 0 };
	bool OrderPlaced{ false };

	cout << "Welcome to our online store!\n";
	cout << "Menu:\n";
	cout << "1. Order T-Shirt\n";
	cout << "2. Order Jeans\n";
	cout << "3. Order Shoes\n";
	cout << "4. Checkout\n";
	cout << "Enter your choice (1-4): ";
	cin >> Choice;

	switch (Choice) {
	case 1:
		cout << "T-Shirt added to your cart." << endl;
		break;
	case 2:
		cout << "Jeans added to your cart." << endl;
		break;
	case 3:
		cout << "Shoes added to your cart." << endl;
		break;
	case 4:
		cout << "Thank you for your order!" << endl;
		break;
	default:
		cout << "Invalide choice. Please select again." << endl;
		break;


	}

	return 0;
}


