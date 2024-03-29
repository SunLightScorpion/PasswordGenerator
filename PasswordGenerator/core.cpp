#include <iostream>
#include <fstream>
#include <string>
#include <ctime>

using namespace std;

int main() {

    cout << "Gebe die Anzahl der buchstaben des Passworts an: ";

    string password;
    int lenght, rNumber;
    char chars[] = "qwertzuiopasdfghjklyxcvbnmQWERTZUIOPASDFGHJKLYXCVBNM1234567890!?*[]{}* ";

    ofstream out_file;

    out_file.open("pass.txt", std::ofstream::app);

    cin >> lenght;

    if (lenght == 0) {
        lenght = 12;
    }

    if (lenght > 100) {
        lenght = 100;
    }

    srand(time(nullptr));

    for (int i = 1; i < lenght + (1); i++) {

        rNumber = rand() % (sizeof(chars) - 1);
        char c = chars[rNumber];

        if (c == ' ') {
            c = '_';
        }

        out_file << c;

    }

    out_file << "\n";

    cout << "Done!" << endl;

#ifdef _WIN32
    system("pause");
#endif

    return 0;
}