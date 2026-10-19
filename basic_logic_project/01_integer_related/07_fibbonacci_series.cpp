#include <iostream>
using namespace std;

int main () {
    int n1 , n2 , n3;
    n1 = 0;
    n2 = 1;
    cout << "enter the number \n";
    cin >> n3;
    n3 = n1 + n2;
    n1 = n2;
    n2 = n3;
    cout << n3;
}