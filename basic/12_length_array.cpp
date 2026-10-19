#include <iostream>
using namespace std;

int main() {
    int mynum[5] = {1,2,3,4,5};
    int getarraylength = sizeof(mynum)/sizeof(mynum[0]);
    cout << getarraylength;

    return 0;

    // multi dim array    this is same as the python array change and remove and access 2,2,2
    string letters[2][4] = {
        {"a" , "b" , "c" , "d"},
        {"e" , "f" , "g" , "h"}
    };
    for(int i =0; i < 2; i++) {
        for(int j = 0; j < 4; j++) {
            cout << letters[i][j] << "\n";
        }
    }
    return 0;





}