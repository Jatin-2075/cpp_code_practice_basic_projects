#include <iostream>
using namespace std;

void swap_num(int &x, int &y){
    int z = x;
    x = y;
    y = z;
}

int main() {
    int firstnum = 543;
    int secondnum = 754;

    cout << "before swap " << "\n";
    cout << firstnum << secondnum << "\n";

    swap_num(firstnum , secondnum);
    cout << "after swap:  " << "\n";
    cout << firstnum << secondnum << "\n";
    return 0;
}
