#include <iostream>
using namespace std;

int main() {
    bool ships[4][4] = {
        {0,0,0,1},
        {1,0,0,0},
        {0,0,0,0},
        {0,0,1,0}
    };

    int hits = 0;
    int numberofturns = 0;

    while(numberofturns < 4) {
        int row,column;

        cout << "selection of coordinates\n";
        cout << "choose a row number between 0 to 3\n";
        cin >> row;

        cout << "choose a column number between o to3 \n";
        cin >> column;

        if (ships[row][column]) {
            ships[row][column] = 0;
            hits++;

            cout << "!hit" << (3-hits) << "left \n\n";

        } else {
            cout << "miss\n\n";

        };
        numberofturns++;
        };
            cout << "victory";
    cout << "you won in " << numberofturns << "turns";
    return 0;
}