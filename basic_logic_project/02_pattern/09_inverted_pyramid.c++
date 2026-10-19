#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Bottom half
    for(int i = n - 2; i >= 0; i--) {
        for(int s = 0; s < n - i - 1; s++) {
            cout << " ";
        }
        for(int j = 0; j < 2*i + 1; j++) {
            cout << "#";
        }
        cout << endl;
    }

    return 0;
}
