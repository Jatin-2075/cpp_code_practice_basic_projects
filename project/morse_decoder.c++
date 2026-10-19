#include <iostream>
#include <string>
#include <map>
#include <sstream>
using namespace std;

int main() {
    map<string, string> morseToChar = {
        {".-", "A"}, {"-...", "B"}, {"-.-.", "C"}, {"-..", "D"},
        {".", "E"}, {"..-.", "F"}, {"--.", "G"}, {"....", "H"},
        {"..", "I"}, {".---", "J"}, {"-.-", "K"}, {".-..", "L"},
        {"--", "M"}, {"-.", "N"}, {"---", "O"}, {".--.", "P"},
        {"--.-", "Q"}, {".-.", "R"}, {"...", "S"}, {"-", "T"},
        {"..-", "U"}, {"...-", "V"}, {".--", "W"}, {"-..-", "X"},
        {"-.--", "Y"}, {"--..", "Z"}, {".----","1"}, {"..---", "2"},
        {"...--", "3"}, {"....-", "4"}, {".....", "5"}, {"-....", "6"},
        {"--...", "7"},{"----.","8"}, {"----.", "9"}, {"-----", "0"}
    };

    map<string, string> charToMorse;
    for (auto& pair : morseToChar) {
        charToMorse[pair.second] = pair.first;
    }

    string select;
    cout << "Decode or code a message?\n> decode\n> code\n";
    cin >> select;
    cin.ignore();

    if (select == "decode") {
        string input;
        cout << "Enter Morse code (space-separated, 'exit' to stop):\n";
        while (true) {
            getline(cin, input);
            if (input == "exit") break;

            stringstream ss(input);
            string code;
            while (ss >> code) {
                if (morseToChar.count(code))
                    cout << morseToChar[code];
                else
                    cout << "?";
            }
            cout << "\n";
        }
    }

    else if (select == "code") {
        string input;
        cout << "Enter text (A-Z only, 'exit' to stop):\n";
        while (true) {
            getline(cin, input);
            if (input == "exit") break;

            for (char c : input) {
                if (c == ' ') {
                    cout << " /n";
                    continue;
                }

                string letter(1, toupper(c));
                if (charToMorse.count(letter))
                    cout << charToMorse[letter] << " ";
                else
                    cout << "? ";
            }
            cout << "\n";
        }
    }

    return 0;
}
