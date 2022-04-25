#include <iostream>
#include <fstream>
#include <string>
#include <ctime>

using namespace std;

int main() {

    cout << "Gebe die Anzahl der buchstaben des Passworts an: " << endl;

	string password, wait;
	int lenght, rNumber;
	char chars[] = "qwertzuiopasdfghjklyxcvbnmQWERTZUIOPASDFGHJKLYXCVBNM1234567890!? ";

	ofstream out_file;

	out_file.open("pass.txt", std::ofstream::app);

	cin >> lenght;

	if (lenght == 0) {
		lenght = 12;
	}

	if (lenght > 100) {
		lenght = 100;
	}

	srand(time(NULL));

	for (int i = 1; i < lenght + (1); i++) {

		rNumber = rand() % 65;
		char c = chars[rNumber];

		if (c == ' ') {
			c = '_';
		}

		out_file << c;

	}

	out_file << "\n";

	cout << "Done!" << endl;

    return 0;
}
