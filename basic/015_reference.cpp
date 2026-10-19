#include <iostream>
#include <string>
using namespace std;

int main() {
    string food = "burgur";
    string &meal = food;
// is main tells that it is a reference 
    cout << food << "\n";
    cout << meal << "\n";

    string* ptr = &food; 
    cout << food << "\n";
    cout << &food << "\n";
    cout << ptr << "\n";
    return 0;

    cout << *ptr << "\n";
    *ptr = "Hamburger";
    cout << *ptr << "\n";
    cout << food << "\n";

  
}
