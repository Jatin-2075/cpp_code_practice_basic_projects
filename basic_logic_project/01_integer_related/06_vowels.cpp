#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char a;
    cout << "Enter an alphabet: \n";
    cin >> a;

    // Convert the character to lowercase
    char b = tolower(a);

    // Check if it's a vowel
    if (b == 'a' || b == 'e' || b == 'i' || b == 'o' || b == 'u') {
        cout << "This is a vowel.\n";
    }
    
    
    else {
        cout << "This is a consonant.\n";
    }

    return 0;
}
