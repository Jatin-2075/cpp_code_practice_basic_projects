#include <iostream>
using namespace std;

int main() {
    string cars[4] = {"lambo" , "tesla" , "bugatti" , "porche"};
    cars[1] = "pagani";

    for (int i=0; i<4; i++) {
        cout << cars[i] << "\n";
    }

//alternate method to do this is this
    for(string i : cars) {
        cout << i << "\n";
    }

}