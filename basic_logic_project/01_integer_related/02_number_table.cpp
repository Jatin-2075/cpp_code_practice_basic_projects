#include <iostream>
using namespace std;

class Table {
    public:
        int number; // Variable to store the number for the multiplication table.

        void formation() {
            cout << "Which table do you want to know? \n";
            cin >> number;

            // Loop to generate the multiplication table.
            for (int i = 1; i <= 10; i++) {
                cout << number << " x " << i << " = " << (number * i) << endl;
            }
        }
};

int main() {
    Table obj;
    obj.formation(); // Call the method to display the multiplication table.
    return 0;
}