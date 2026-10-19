#include <iostream>
using namespace std;

struct car {
    string brand;
    string model;
    int year;
};

int main() {
    car mycar1;
    mycar1.model = "m8";
    mycar1.brand = "bmw";
    mycar1.year = 2021;

    car mycar2;
    mycar2.model = "aventador";
    mycar2.brand = "lamborghini";
    mycar2.year = 2015;

    cout << mycar1.brand << " " << mycar1.model << " " << mycar1.year << "\n";
    cout << mycar2.brand << " " << mycar2.model << " " << mycar2.year << "\n";



}