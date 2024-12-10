#include <iostream>

using namespace std;


int main() {
	int Score{ 0 };
	cout << "Enter your score: ";
	cin >> Score;

	if (Score >= 90) {
		cout << "Your grad is A." << endl;
	}
	if (Score >= 80) {
		cout << "Your grad is B." << endl;
	}
	if (Score >= 70) {
		cout << "Your grad is C." << endl;
	}
	if (Score >= 60) {
		cout << "Your grad is D." << endl;
	}
	else {
		cout << "Your grad is F." << endl;
	}


	return 0;
}


