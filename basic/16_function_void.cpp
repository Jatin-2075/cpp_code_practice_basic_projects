#include <iostream>
using namespace std;

void myfunction() {
    cout << "hee hlo bye";
}

void my2func(string fname) {
    cout << fname << " sharma";
}

void mycountry(string country = "india" , string language = "hindi"){
    cout << country << language << "\n";
}

int main() {
    myfunction();
    my2func("jatin");
    mycountry("dubai", "arabic");
    mycountry();
    return 0;
}