#include <iostream>
#include <chrono>
#include <ctime>
#include <thread>

using namespace std;

int main() {
	//while (true) {
	//	cout << "This is an infinate loop.  Press Ctrl+c to stop." << endl;
	//}

	while (true) {
		auto Now = std::chrono::system_clock::now();
		std::time_t CurrentTime;
		std::time(&CurrentTime);

		char Buffer[26];

		ctime_s(Buffer, sizeof(Buffer), &CurrentTime);
		cout << "Current Time: " << Buffer << endl;
	}


	return 0;
}


