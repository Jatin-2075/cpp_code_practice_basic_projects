#include <iostream>
using namespace std;

int main() {
    int m;
    cin >> m;

    for(int i = 0; i < m + 1; ++i){
        for(int j = m - 1; j > i ; --j){
            if(j == m){
                cout << " ";
            } else {
                cout << " ";
            }
        }
        for(int k = 0; k < i ; ++k ){
            cout << i << " ";
        }
        cout << endl;
    }
}