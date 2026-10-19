#include <iostream>
#include <string> // Include this for the string type
using namespace std;

class car {
    public:
    void car_brand() {
        cout << "Brand name of car: Lamborghini\n";
    }
};

class model : public car {
    public:
    void car_model() {
        cout << "Model of the car: Huracan\n";
    }
};

class year : public car {
    public:
    void car_year() {
        cout << "Year of manufacture: 2013\n";
    }
};

int main() {
    car mycar;
    mycar.car_brand(); // Fix: Call the method using parentheses
    model myModel;
    myModel.car_model(); // Access model info
    year myYear;
    myYear.car_year(); // Access year info

    return 0; // Indicate successful program termination
}
