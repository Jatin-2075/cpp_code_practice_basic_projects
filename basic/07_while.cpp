#include <iostream>
using namespace std;

int main() {
    int i = 0 ;
    do {
        cout << i << "\n"; //do will check if the code doesn't throw any error
        i++;
    }
    while (i < 5);
    return 0;

    for (int i = 0; i < 5; i++) {
        cout << i << "\n";
    }
}