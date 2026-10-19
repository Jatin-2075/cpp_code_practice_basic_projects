#include <iostream>
using namespace std;

int plus_function(int x, int y) {
    return x + y;
}

double plus_func(double x, double y) {
    return x + y;
}

int main() {
    int mynum1 = plus_func(65, 86);
    double mynum2 = plus_func(65, 76);
    cout << "int" << mynum1 << "\n";
    cout << "double" << mynum2 << "\n";
    return 0;
}