#include <iostream>
#include <string> //use string in code where we use string
using namespace std;

int main() {
    int mynum = 25;  // if you now put mynunm = 28 this will  be overwritted
    cout << mynum;
    
    string mystring = "hello hai ji \n";
    cout << mystring ;
    cout << "length of string is \n", mystring.length();
    cout << mystring[1];

    cout << "my name is \'jatin\' ";
    
    mystring[0] = 'k';
    cout << mystring;
    
    double myfloat = 5.68;
    cout << myfloat;

    
    int x = 5, y = 9, z = 398;
    cout << x + y + z ;

    const int j = 987;
    cout<< j;

    return 0 ;
}
