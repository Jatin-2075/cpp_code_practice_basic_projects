#include <iostream>
using namespace std;

int main() {
    // outer loop 
    for(int i = 1; i<=2; i++) {
        cout << "outer" << i << "\n";

        //inner loop
        for(int y = 1; i<=3; y++) {
            cout << "inner " << y <<"\n";
        }

        return 0;
    }
}