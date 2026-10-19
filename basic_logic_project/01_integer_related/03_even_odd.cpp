#include <iostream>
#include <vector> 
using namespace std;

int main() {
    int a ;
    cout << "enter any number \n";
    cin >> a;
    if (a %2== 0){
        cout << "it ia a even number "<< endl;
    }
    else if (a %2== 1){
        cout << "odd number \n";
    }
    else {
        cout << "invalid input";
    };
}