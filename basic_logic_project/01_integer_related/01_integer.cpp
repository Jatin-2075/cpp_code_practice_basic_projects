#include <iostream>
using namespace std;

class integer {
    public:
    void build() {
        int builder = 0; // Initialize builder
        while (builder < 100) { // Corrected condition
            builder = builder + 1;
            cout << builder << endl; // Added newline for better output formatting
        }
    }
};

int main() {
    integer obj; // Create an object of the class
    obj.build(); // Call the build method
    return 0;
}