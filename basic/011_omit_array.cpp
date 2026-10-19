#include <iostream>
#include <vector>
using namespace std;

int main() {
    //vector are the string that can be added or removed anytime
    vector<string> cars = {"lambo", "pagani", "bugatti"};
    cars.push_back("ferrari");

    for(string car : cars) {
        cout << car << "\n";
    }
    return 0;
 
}