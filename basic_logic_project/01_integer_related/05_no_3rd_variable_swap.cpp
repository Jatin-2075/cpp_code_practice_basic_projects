#include <iostream> 
using namespace std;
int main () {
    float a , b;
    cout << "enter the numbers \n";
    cin >> a >> b;
    a = a + b;
    b = a - b;
    a = a - b;

    cout << "a is " << a << endl << "b is " << b << endl;
}