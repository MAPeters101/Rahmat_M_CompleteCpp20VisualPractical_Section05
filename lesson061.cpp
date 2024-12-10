#include <iostream>

using namespace std;

int main() {

	cout << "Example with 'continue' keyword:\n";


	for (int i = 1; i < 10; ++i) {
		if (i == 5 || i == 7) {
			cout << "Skipping iteration " << i << " using 'continue'." << endl;
			continue;
		}
		cout << "Iteration " << i << " is executed." << endl;
	}

	return 0;
}


