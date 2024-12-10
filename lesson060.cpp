#include <iostream>

using namespace std;

int main() {
	string Text{ "Hey, how are you?" };
	int VowelCount{ 0 };
	string UPPERCASE{};

	for (auto C : Text) {
		UPPERCASE += std::toupper(C);
	}
	cout << UPPERCASE << endl;

	return 0;
}


