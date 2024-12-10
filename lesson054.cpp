#include <iostream>

using namespace std;

int main() {
	int Age;
	char HasDrivingTest;

	cout << "Enter your age: ";
	cin >> Age;

	if (Age >= 18) {
		cout << "Have you passed the driving test? (Y/N): ";
		cin >> HasDrivingTest;

		if (HasDrivingTest == 'y' || HasDrivingTest == 'Y') {
			cout << "Congratulations!  You are eligible for a driving license." << endl;
		}
		else if (HasDrivingTest == 'n' || HasDrivingTest == 'N') {
			cout << "You need to pass the driving test first." << endl;
		}
		else {
			cout << "Invalid input for driving test status." << endl;
		}
	}
	else {
		cout << "You are not eligible for a driving licence." << endl;
	}

	return 0;
}


