#include <iostream>
using namespace std;

int x = 5;
void my_func() {
    int x = 22;
    cout << x << "\n";
}

int main() {
    my_func();
    cout << x;
    return 0;                                               
}